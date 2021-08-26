#include <bits/stdc++.h>
using namespace std;

void remove_blank(string &s1){
    if(s1.length()){
        int i{0};
        bool check{true};

        for(int i = 0; i < s1.length() and check; i++){
            if(i != s1.length() - 1){
                if(s1.at(i) == s1.at(i + 1)){
                    s1.erase(i,1);
                }
            }
            else check = false;
        }
    }
}


int main(){
    string s1{"aaaannndddrreeaaaaa"};

    remove_blank(s1);

    cout<<s1 <<endl;
}