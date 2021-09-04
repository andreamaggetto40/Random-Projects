#include <stdlib.h>
#include <iostream>
#include <stack>
using namespace std;

template <class T>

class stack{
    stack<T> pvt_stack;

    public:
        stack(){ //default constructor
            pvt_stack.top(0);
        }
        stack(const T data){
            pvt_stack.top(data);
        }
        void initialize(const size_t size){
            if(pvt_stack.size()){
                for(int i = 1; i < size; i++){
                    pvt_stack.push(i);
                }
            }
        }
        void print(stack<T> stack){
            if(stack.size()){
                while(!stack.empty()){
                    cout<<stack.top() <<endl;
                    stack.pop();
                }
            }
        }
        T operator[](int index){
            if(index and index < pvt_stack.size() and pvt_stack.size()){
                for(int i = 0; i < index; i++){
                    pvt_stack.pop();
                }
                return pvt_stack.top();
            }
        }
};

int main(){
    stack<double> first{3};

    
}

