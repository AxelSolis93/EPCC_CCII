#ifndef __LINKEDLIST_H__
#define __LINKEDLIST_H__

#include <iostream>
#include "Node.h"

class LinkedList {
        int size;
        Node *head;
    public:

        LinkedList();
        LinkedList(int);
        LinkedList(const LinkedList &);

        ~LinkedList();

        void insert(int);

        void removeByValue(int);
        void removeByPosition(int);
        
        bool search(int value);
        
        friend std::ostream& operator <<(std::ostream &salida1,const LinkedList& C);

        LinkedList operator+(LinkedList& C){ //Suma
            LinkedList auxlist(*this);
            Node* aux = C.head; 
            while(aux!=nullptr){
                auxlist.insert(aux->getValue());
                aux = aux->getNext();
            }
            return auxlist;
        };
        void operator=(LinkedList &C){ //Operador de asignación
            this->head = C.head; 
        }
};

#endif