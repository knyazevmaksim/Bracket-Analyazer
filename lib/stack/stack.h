#ifndef STACK_H
#define STACK_H
#include <iostream>
template <class stackType> class Stack
{
   public:
      Stack();
      ~Stack();
      void push(stackType i);
      void pop();
      stackType top(); 
      bool empty();
      int stackSize();     
   private:
      struct Link
      {
         Link * next;
         stackType data;
      };

      int size;
      Link * makeNewItem (stackType data);
      Link * head;
   protected:
};
template<class stackType>
typename Stack<stackType>::Link* Stack<stackType>::makeNewItem(stackType i)
{
   Link * tmp=new Link;
   tmp->next=nullptr;
   tmp->data=i;      
   return tmp;  
}

template<class stackType> bool Stack<stackType>::empty()
{
   if (head)
      return false;
   else 
      return true;
}

template<class stackType> int Stack<stackType>::stackSize()
{
   return size;
}

template<class stackType> void Stack<stackType>::push(stackType i)
{
   Link *tmp=makeNewItem(i);
   tmp->next=head;
   head=tmp;
   size++;
}

template<class stackType> void Stack<stackType>::pop()
{
   Link * tmp;
   if (head!=nullptr)
   {
      tmp=head->next;
      delete head;
      head=tmp;
      size--;
   }
   else 
      throw 1;
}

template<class stackType> stackType Stack<stackType>::top()
{
   if (head)
      return head->data;
   else
   {
      throw 2;
   }
}

template<class stackType> Stack<stackType>::Stack()
{
   head=nullptr;
   size=0;
}
template<class stackType> Stack<stackType>::~Stack()
{
   while(head)
      pop();
}
#endif
