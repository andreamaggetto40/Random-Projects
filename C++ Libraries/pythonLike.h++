#include <iostream>

using std::cout; using std::endl;

class List{
    struct cell{
        struct cell *prev;
        int data;
        struct cell *next;
    };
    struct cell *head;
    struct cell *tail;

    public:
        List(){
            head = tail = nullptr;
        }
        List(const int element){
            head = new cell;
            head->data = element;
            head->prev = head->next = nullptr;
            tail = head;
        }
        void prepend(int element){

        }
        void append(int element){
            cell *support = new cell;
            support->data = element;
            support->prev = tail;
            tail->next = support;
            support->next = nullptr;
            tail = tail->next;
        }
        void print(){
            cell *iterator = head;

            while(iterator){
                cout<<iterator->data <<endl;
                iterator = iterator->next;
            }
        }
        void reversePrint(){
            cell *iterator = tail;

            while(iterator){
                cout<<iterator->data <<endl;
                iterator = iterator->prev;
            }
        }
        size_t size(){
            size_t amount{0};
            cell *iterator = head;

            while(iterator){
                amount++;
                iterator = iterator->next;
            }

            return amount;
        }
        /**
        * @brief : overloaded operator [] method get a value from list
        * @return list element in 'index' position
        */
        int operator[](int index){
            int counter{};
            cell *iterator{};
            int result{};

            if(index >= 0 and index < this->size()){
                counter = 0;
                iterator = head;

                while(counter < index){
                    counter++;
                    iterator = iterator->next;
                }

                result = iterator->data;
            } 
            else{
                counter = -1;
                iterator = tail;

                while(counter > index){
                    iterator = iterator->prev;
                }

                result = iterator->data;
            }     
            return result; 
        }
};