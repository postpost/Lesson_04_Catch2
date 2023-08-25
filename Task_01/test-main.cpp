#pragma once
#include <iostream>
#include "List.hpp"
#include "ListNode.hpp"
#include <./catch2/catch_test_macros.hpp>
#include <./catch2/catch_session.hpp>


TEST_CASE ("test_list_size", "[list_size]"){
    List* list = new List;
    INFO ("test list size");
    SECTION ("LIST IS EMPTY"){
         CHECK (list->Empty() == true);
        //REQUIRE(Factorial(5) == Catch::Approx(1));
    }
    SECTION ("SIZE>0"){
        list->PushBack(10);
	    list->PushBack(14);
	    list->PushBack(-5);
	    list->PushBack(3);
	    list->PushBack(9);
        CHECK(list->Empty()==false);
    }
    SECTION ("CLEAR"){
        list->Clear();
        CHECK(list->Empty()==true);
    }
}

int main(){
    //std:: cout << "Test Catch_2\n";
    return Catch::Session().run();
}