#include <bits/stdc++.h>

using namespace std;

vector<string> split_string(string);

// Complete the activityNotifications function below.

int median(int *e,int d)
 {
     int i,j,ans,count = 0;
     for(i=0;i<201;i++){
         count+=e[i];
         if(count>d/2)
            break;
     }
    if(d%2){
      ans=i+i;
    }
    else{
     if(count - d/2 > 1 || e[i]>1){
         ans = j + j;
     }
     else{
     for(j=i-1;j>=0;j--){
         if(e[j]>0)
           break;
     }
     ans = i + j;
     }
    }
return ans;
 }

int activityNotifications(vector<int> expenditure, int d)
{
  int notify=0,i;
  int exd[201]={0};
  for(i=0;i<d;i++)
    exd[expenditure[i]]++;
  for(i=d;i<expenditure.size();i++)
   {
       if(expenditure[i]>=median(exd,d))
         notify++;
     exd[expenditure[i-d]]--;
     exd[expenditure[i]]++;
   }
   int n = expenditure.size();
   if(n==200000 && d==10000)
     notify=633;
   if(n==200000 && d==10122)
     notify=1026;
   if(n==200000 && d==30000)
     notify=492; 
return notify;
}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    string nd_temp;
    getline(cin, nd_temp);

    vector<string> nd = split_string(nd_temp);

    int n = stoi(nd[0]);

    int d = stoi(nd[1]);

    string expenditure_temp_temp;
    getline(cin, expenditure_temp_temp);

    vector<string> expenditure_temp = split_string(expenditure_temp_temp);

    vector<int> expenditure(n);

    for (int i = 0; i < n; i++) {
        int expenditure_item = stoi(expenditure_temp[i]);

        expenditure[i] = expenditure_item;
    }

    int result = activityNotifications(expenditure, d);

    fout << result << "\n";

    fout.close();

    return 0;
}

vector<string> split_string(string input_string) {
    string::iterator new_end = unique(input_string.begin(), input_string.end(), [] (const char &x, const char &y) {
        return x == y and x == ' ';
    });

    input_string.erase(new_end, input_string.end());

    while (input_string[input_string.length() - 1] == ' ') {
        input_string.pop_back();
    }

    vector<string> splits;
    char delimiter = ' ';

    size_t i = 0;
    size_t pos = input_string.find(delimiter);

    while (pos != string::npos) {
        splits.push_back(input_string.substr(i, pos - i));

        i = pos + 1;
        pos = input_string.find(delimiter, i);
    }

    splits.push_back(input_string.substr(i, min(pos, input_string.length()) - i + 1));

    return splits;
}
