#include "doctest.h"
#include "BinaryTree.hpp"
#include <string>
#include <iostream>


using namespace std;
using namespace ariel;

const int num_of_test=20;

BinaryTree<int> bulittree(){
    BinaryTree<int> my_tree;
    my_tree.add_root(0);
    for (int i = 0; i < num_of_test; i++) {
        my_tree.add_right(i, i -1);
        my_tree.add_left(i,i+1);
    }
    return my_tree;
}

TEST_CASE("TEST 1")
{
    BinaryTree<int> bt=bulittree();
    for (auto i = bt.begin_inorder(); i != bt.end_inorder() ; i++) {
        CHECK((*i) == num_of_test);
       
    }
}
TEST_CASE("TEST 2")
{
    BinaryTree<int> bt=bulittree();
    for (auto i = bt.begin_postorder(); i != bt.begin_postorder() ; i++) {
        CHECK((*i) == num_of_test);
       
    }
}
TEST_CASE("TEST 3")
{
    BinaryTree<int> bt=bulittree();
    for (auto i = bt.begin_preorder(); i != bt.end_preorder() ; i++) {
        CHECK((*i) == num_of_test);  
    }
}
TEST_CASE("TEST 4"){
    BinaryTree<int> bt;
    CHECK_NOTHROW(bt.add_root(7));
    CHECK_NOTHROW(bt.add_root(100));
    CHECK_NOTHROW(bt.add_left(100, 1));
    CHECK_NOTHROW(bt.add_left(1, 7));
    CHECK_NOTHROW(bt.add_left(7, -1));
    CHECK_NOTHROW(bt.add_left(-1, 5));
    CHECK_NOTHROW(bt.add_right(100, 20));
    CHECK_NOTHROW(bt.add_right(20, 0));
    CHECK_NOTHROW(bt.add_right(0, 2));
    CHECK_NOTHROW(bt.add_right(2, 9));

}
TEST_CASE("TEST 5"){
    BinaryTree<string> bt;
    CHECK_NOTHROW(bt.add_root("a"));
    CHECK_NOTHROW(bt.add_left("a", "b"));
    CHECK_NOTHROW(bt.add_left("b", "c"));
    CHECK_NOTHROW(bt.add_left("c", "d"));
    CHECK_NOTHROW(bt.add_left("d", "da"));
    CHECK_NOTHROW(bt.add_right("da", "t"));
    CHECK_NOTHROW(bt.add_right("t", "l"));
    CHECK_NOTHROW(bt.add_right("l", "n"));
    CHECK_NOTHROW(bt.add_right("a", "k"));
    CHECK_NOTHROW(bt.add_right("a", "l"));
    CHECK_NOTHROW(bt.add_right("n", "m"));
    CHECK_NOTHROW(bt.add_right("m", "s"));

}


