class Solution {
public:
    int maxEvents(vector<vector<int>>& events) {
        int n = events.size();

        // Find the last day of any event (max end day)
        int maxDay = 0;
        for (int i = 0; i < n; i++) {
            maxDay = max(maxDay, events[i][1]);
        }

        // Min-heap to store end days of available events
        priority_queue<int, vector<int>, greater<int>> minHeap;

        // Sort events based on start day
        sort(events.begin(), events.end());

        int count = 0;  // Total events attended
        int i = 0;      // Pointer for events list

        // Loop through each day
        for (int day = 1; day <= maxDay; day++) {

            // Add all events that start today or earlier
            while (i < n && events[i][0] <= day) {
                minHeap.push(events[i][1]); // Add end day of the event
                i++;
            }

            // Remove events that already expired (end day before today)
            while (!minHeap.empty() && minHeap.top() < day) {
                minHeap.pop();
            }

            // Attend the event with the earliest end day (greedy choice)
            if (!minHeap.empty()) {
                minHeap.pop();  // Attend one event today
                count++;
            }
        }

        return count; // Maximum events we can attend
    }
};
