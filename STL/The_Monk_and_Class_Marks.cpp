//  #include<bits/stdc++.h>
//  using namespace std;
//  int main(){
//     map<int,multiset<string> > marks_map;
//     int n;
//     cin>>n;
//     for (int i = 0; i < n; i++)
//     {
//         int marks;
//         string name;
//         cin>>name>>marks;
//         marks_map[marks].insert(name);
//     }
//     auto cur_it = --marks_map.end();
//     while (true)
//     {
//         auto &students = (*cur_it).second;
//         auto number = (*cur_it).first;
//         for (auto student : students)
//         {
//             cout << student << " " << number << endl;
//         }
//         if (cur_it == marks_map.begin()) break;
//         cur_it --;
        
//     }
    

//     return 0;
//  }

 #include<bits/stdc++.h>
 using namespace std;
 int main(){
    map<int,multiset<string> > marks_map;
    int n;
    cin>>n;
    for (int i = 0; i < n; i++)
    {
        int marks;
        string name;
        cin>>name>>marks;
        marks_map[-1*marks].insert(name);
    }

    for (auto &marks_students_pr : marks_map)
    {
        auto &students = marks_students_pr.second;
        auto number = marks_students_pr.first;
        for (auto student : students)
        {
            cout << student << " " << -1*number << endl;
        }
    }
    return 0;
 }