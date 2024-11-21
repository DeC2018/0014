#include <iostream>
#include <vector>
#include <string>

using namespace std;

class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        if (strs.empty())
            return "";

        for (int i = 0; i < strs[0].length(); ++i)
            for (int j = 1; j < strs.size(); ++j)
                if (i == strs[j].length() || strs[j][i] != strs[0][i])
                    return strs[0].substr(0, i);

        return strs[0];
    }
};

int main() {
    Solution solution;
    
    // Test case 1
    std::vector<std::string> strs1 = {"flower", "flow", "flight"};
    std::cout << "Test case 1:" << std::endl;
    std::cout << "Input: [\"flower\", \"flow\", \"flight\"]" << std::endl;
    std::cout << "Output: \"" << solution.longestCommonPrefix(strs1) << "\"" << std::endl << std::endl;
    
    // Test case 2
    std::vector<std::string> strs2 = {"dog", "racecar", "car"};
    std::cout << "Test case 2:" << std::endl;
    std::cout << "Input: [\"dog\", \"racecar\", \"car\"]" << std::endl;
    std::cout << "Output: \"" << solution.longestCommonPrefix(strs2) << "\"" << std::endl;
    
    return 0;
}
