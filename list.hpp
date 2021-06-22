#include <iostream>

class list{
    struct cell{
        int info;
        cell *next;
    };
    struct cell *l; //first list element pointer
    struct cell *last; //last list element pointer

    public:
        list(){
            l = last = nullptr;
        }
        list(const int element){
            append(element);
        }
        void append(const int element){
            cell *support = new cell;
            support->info = element;
            support->next = nullptr;

            if(!l){
                l = last = support;
            }
            else{
                if(!l->next) l->next = last = support;
                else{
                    cell *iterator = l;
                    bool flag = true;

                    while(flag){
                        if(iterator->next) iterator = iterator->next;
                        else{
                            iterator->next = last = support;
                            iterator = l;
                            flag = false;
                        }
                    }
                }
            }
        }
        void print(){
            if(!l and !last) std::cout <<"No items inside the list!" <<std::endl;
            else{
                while(l){
                    std::cout<<l->info <<std::endl;
                    l = l->next;
                }
            }
        }
        bool is_empty(){
            return l == nullptr and last == nullptr;
        }
        int getSize(){
            if(l and last){
                int size{0};

                while(l){
                    size++;
                    l = l->next;
                }

                return size;
            }
        }
        int getSum(){
            if(l and last){
                size_t sum{0};

                while(l){
                    sum += l->info;
                    l = l->next;
                }

                return sum;
            }
        }
        int operator[](int element){
            if(l and last){
                int index{0}; bool flag = true;

                if(element >= 0){
                    while(l and flag){
                        if(index != element){
                            index++;
                            l = l->next;
                        }
                        else{
                            flag = false;
                            return l->info;
                        }
                    }
                }
            }
        }
        int at(int element){
            if(!this->is_empty() && element >= 0){
                bool flag = true; int index = 0;

                while(l and flag){
                    if(index != element){
                        index++;
                        l = l->next;
                    }
                    else{
                        flag = false;
                        return l->info;
                    }
                }
            }
        }

};



