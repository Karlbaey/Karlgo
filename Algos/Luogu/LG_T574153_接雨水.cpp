// 4 Ways to Solve Trapping Rain Water
#include <algorithm>
#include <cstdio>
#include <stack>
#include <vector>

int trap_bruteforce(const std::vector<int>& height) {
    if (height.size() <= 2) {
        return 0;
    }

    int total = 0;

    for (int i = 0; i < height.size(); i++) {
        int left_max = 0;
        for (int j = 0; j < i; j++) {
            left_max = std::max(left_max, height[j]);
        }

        int right_max = 0;
        for (int j = i + 1; j < height.size(); j++) {
            right_max = std::max(right_max, height[j]);
        }

        int water = std::min(left_max, right_max) - height[i];

        if (water > 0) {
            total += water;
        }
    }

    return total;
}

int trap_dp(const std::vector<int>& height) {
    if (height.size() <= 2) {
        return 0;
    }

    int n = height.size();
    std::vector<int> leftMax(n), rightMax(n);

    int total = 0;

    leftMax[0] = height[0];
    for (int i = 1; i < n; i++) {
        leftMax[i] = std::max(leftMax[i - 1], height[i]);
    }

    rightMax[n - 1] = height[n - 1];
    for (int j = n - 2; j >= 0; j--) {
        rightMax[j] = std::max(rightMax[j + 1], height[j]);
    }

    for (int i = 0; i < n; i++) {
        int water = std::min(leftMax[i], rightMax[i]) - height[i];
        if (water > 0) {
            total += water;
        }
    }

    return total;
}

int trap_stack(const std::vector<int>& height) {
    if (height.size() <= 2) {
        return 0;
    }

    std::stack<int> st;
    int n = height.size();
    int total = 0;

    for (int i = 0; i < n; i++) {
        // 发现了更高的右墙
        while (!st.empty() && height[i] > height[st.top()]) {
            int bottom = st.top();
            st.pop();
            if (st.empty()) {
                break; // 左侧没有墙了，装不下水
            }

            int left = st.top();
            int width = i - left - 1;

            int water = std::min(height[left], height[i]) - height[bottom];
            if (water > 0) {
                total += water * width;
            }
        }
        st.emplace(i);
    }
    return total;
}

int trap_2pointers(const std::vector<int>& height) {
    if (height.size() <= 2) {
        return 0;
    }

    int l = 0, r = height.size() - 1;
    int left_max = height[l], right_max = height[r];
    int total = 0;

    while (l < r) {
        int water;
        if (left_max <= right_max) {
            l++;
            left_max = std::max(height[l], left_max);
            total += std::max(0, left_max - height[l]);
        } else {
            r--;
            right_max = std::max(height[r], right_max);
            total += std::max(0, right_max - height[r]);
        }
    }

    return total;
}

int main() {
    int n;
    std::scanf("%d", &n);
    std::vector<int> height(n);
    for (int i = 0; i < n; i++) {
        std::scanf("%d", &height[i]);
    }

    int res = trap_2pointers(height);
    std::printf("%d", res);

    return 0;
}
