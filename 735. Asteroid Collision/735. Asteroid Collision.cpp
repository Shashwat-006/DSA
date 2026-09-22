/*
 * Problem: 735. Asteroid Collision
 * Difficulty: Medium
 * Link: https://leetcode.com/problems/asteroid-collision/submissions/2150243289/
 * Language: cpp
 * Date: 2026-09-22
 */

class Solution {
public:
    vector<int> asteroidCollision(vector<int>& asteroids) {
        int n = asteroids.size();
        vector<int> ans;
        for(int i=0;i<n;i++){
            bool dest=false;
            while(!ans.empty() && ans.back()>0 && asteroids[i]<0 ){
                //prev one destroyed
                if(ans.back()+asteroids[i]<0){
                    ans.pop_back();
                    continue;
                }
                //both destroyed
                else if(ans.back()+asteroids[i]==0){
                    ans.pop_back();
                    dest = true;
                    break;
                }
                //upcoming destoyed
                else{
                    dest= true;
                    break;
                }
            }
            if(!dest) {
                ans.push_back(asteroids[i]);
            }
        }
        return ans;
    }
};
