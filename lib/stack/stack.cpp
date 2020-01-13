#include "stack.h"
#include <iostream>

Stack::Link * Stack::makeNewItem (int i)
{
   Link * tmp=new Link;
   tmp->next=nullptr;
   tmp->data=i;      
   return tmp;  
}

bool Stack::empty()
{
   if (head)
      return false;
   else 
      return true;
}

int Stack::size()
{
   int i=0;
   Link * tmp=head;
   while(tmp)
   {
      i++;
      tmp=tmp->next;
   }
   return i;
}

void Stack::push(int i)
{
   Link *tmp=makeNewItem(i);
   tmp->next=head;
   head=tmp;
}

void Stack::pop()
{
   Link * tmp;
   if (head!=nullptr)
   {
      tmp=head->next;
      delete head;
      head=tmp;
   }
   else 
      std::cout<<"stack is empty";
}

int Stack::top()
{
   if (head)
      return head->data;
   else
      {
         std::cout<<"stack is empty";
         return 0;
      }
}

Stack::Stack()
{
   head=nullptr;
}
Stack::~Stack()
{
   while(head)
      pop();
}

