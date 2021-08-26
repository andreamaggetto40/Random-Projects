#include <bits/stdc++.h> //cc++ library containing every std library of the coding language
using namespace std;

bool is_anagram(const string s1,const string s2){
    if(s1.length() and s2.length()){
        bool flag{true};
        unsigned first{0},second{0};

        for(int i = 0; i < s1.length() and flag; i++){
            for(int j = 0; j < s1.length(); j++){
                if(s1.at(j) == s1.at(i)) first++;
                if(j == (s1.length() - 1)){
                    for(int z = 0; z < s2.length(); z++){
                        if(s2.at(z) == s1.at(i)) second++;
                        if(z == (s2.length() - 1)){
                            flag &= (first == second);
                        }
                    }
                }
            }
        }

        return flag;
    }
}

int main(){
    string first{"anna"},second{"pappo"};

    bool ouput = is_anagram(first,second);

    cout<<ouput <<endl;
}
