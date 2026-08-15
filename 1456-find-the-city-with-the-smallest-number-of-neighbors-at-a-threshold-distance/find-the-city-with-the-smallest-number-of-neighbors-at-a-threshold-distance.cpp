#include <vector>
#include <queue>

using namespace std;

class Solution {
private:
    int dijkstraCount(int n, int src, const vector<vector<pair<int, int>>>& adj, int distanceThreshold) {
        const int INF = 1e9;
        vector<int> dist(n, INF);
        dist[src] = 0;

        // Min-heap storing {distance, node}
        priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> pq;
        pq.push({0, src});

        while (!pq.empty()) {
            auto [currentDist, u] = pq.top();
            pq.pop();

            // Ignore stale entries in priority queue
            if (currentDist > dist[u]) continue;

            for (const auto& [v, wt] : adj[u]) {
                if (dist[u] + wt < dist[v]) {
                    dist[v] = dist[u] + wt;
                    pq.push({dist[v], v});
                }
            }
        }

        // Count reachable cities within distanceThreshold (excluding self)
        int reachableCities = 0;
        for (int i = 0; i < n; i++) {
            if (i != src && dist[i] <= distanceThreshold) {
                reachableCities++;
            }
        }

        return reachableCities;
    }

public:
    int findTheCity(int n, vector<vector<int>>& edges, int distanceThreshold) {
        // Step 1: Build Adjacency List
        vector<vector<pair<int, int>>> adj(n);
        for (const auto& edge : edges) {
            int u = edge[0];
            int v = edge[1];
            int wt = edge[2];

            adj[u].push_back({v, wt});
            adj[v].push_back({u, wt});
        }

        int minReachable = 1e9;
        int resultCity = -1;

        // Step 2: Run Dijkstra from each city
        for (int city = 0; city < n; city++) {
            int count = dijkstraCount(n, city, adj, distanceThreshold);

            // If count is strictly less, or equal with a higher city index
            if (count <= minReachable) {
                minReachable = count;
                resultCity = city;
            }
        }

        return resultCity;
    }
};