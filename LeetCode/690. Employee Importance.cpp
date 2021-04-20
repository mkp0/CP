/*
// Definition for Employee.
class Employee {
public:
    int id;
    int importance;
    vector<int> subordinates;
};
*/

class Solution {
public:
    int DFSUtil(int src,map<int,pair<int,vector<int>>>& employees)
    {
        int impo = employees[src].first;
        for (auto x : employees[src].second)
                impo += DFSUtil(x,employees);
               
        return impo;
    }

    int DFS(map<int,pair<int,vector<int>>>& employees,int v)
    {
        return DFSUtil(v,  employees);
    }
    
    int getImportance(vector<Employee*> employee, int id) {
        map<int,pair<int,vector<int>>> employees;
        for(auto x : employee)
        {
            employees[x->id] = {x->importance,x->subordinates};
        }
        return DFS(employees,id);
    }
};