#include "iterator.h"

//===================================//
//====== OperatorIterator Class =====//
//===================================//
OperatorIterator::OperatorIterator(Base* ptr)
{
    self_ptr = ptr;
}

void OperatorIterator::first()
{
    current_ptr = self_ptr->get_left();
}

void OperatorIterator::next()
{
    if (current_ptr == self_ptr->get_left())
    {
        current_ptr = self_ptr->get_right();
    }
    else
    {
        current_ptr = NULL;
    }
}

bool OperatorIterator::is_done()
{
    if (current_ptr == NULL)
    {
        return true;
    }

    return false;
}

Base* OperatorIterator::current()
{
    return this->current_ptr;
}
//===================================//
//======= UnaryOperator Class =======//
//===================================//
UnaryIterator::UnaryIterator(Base* ptr)
{
    self_ptr = ptr;
}

void UnaryIterator::first()
{
    current_ptr = self_ptr->get_left();
}

void UnaryIterator::next()
{
    current_ptr = NULL;
}

bool UnaryIterator::is_done()
{
    if (current_ptr == NULL)
    {
        return true;
    }
    return false;
}

Base* UnaryIterator::current()
{
    return this->current_ptr;
}
//===================================//
//======= NullIterator Class ========//
//===================================//
NullIterator::NullIterator(Base* ptr)
{
    self_ptr = ptr;
}

void NullIterator::first() {}

void NullIterator::next() {}

bool NullIterator::is_done()
{
    return true;
}

Base* NullIterator::current()
{
    return NULL;
}
//===================================//
//====== PreOrderIterator Class =====//
//===================================//
PreOrderIterator::PreOrderIterator(Base* ptr)
{
    self_ptr = ptr;
}

void PreOrderIterator::first() 
{
    //Empty the stack (just in case we had something leftover from
    //another run)
    
    //Create an iterator for the Base* that we built the iterator for

    //Initialize that iterator and push it onto the stack
    
}

void PreOrderIterator::next()
{
    //Create an iterator for the item on the top of the stack
    
    //Initialize the iterator and push it onto the stack
    
    //As long as the top iterator on the stack is done, pop it off the
    //stack and then advance whatever iterator is now on top of the stack
    
}

bool PreOrderIterator::is_done()
{
    //Return true if there are no more elements on the stack to iterate

}

Base* PreOrderIterator::current()
{
    //Return the current for the top iterator in the stack
    
}


