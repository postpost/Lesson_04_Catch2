#pragma once
#include <iostream>
#include "List.hpp"
#include "ListNode.hpp"
#include <./catch2/catch_test_macros.hpp>
#include <./catch2/catch_session.hpp>


TEST_CASE ("test_list_functions", "[list_func]"){
    List* list = new List;
    list->PushBack(10);
    INFO ("test list functions");
    SECTION ("PushBack()"){
        CHECK (list->Empty() == false);
    }
    SECTION ("PushFront()"){
        list->Clear();
        list->PushFront(11);
        CHECK(list->Empty()==false);
    }
    SECTION ("PopBack()"){
        list->Clear();
        list->PopBack();
        CHECK(list->Empty()==true);
    }

    SECTION ("PopFront()"){
        list->Clear();
        list->PopFront();
        CHECK(list->Empty()==true);
    }
}

int main(){
    //std:: cout << "Test Catch_2\n";
    return Catch::Session().run();
}