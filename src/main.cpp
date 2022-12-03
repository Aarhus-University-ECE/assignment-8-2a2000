extern "C"{
    // Add the header files required to run your main 
#include "insertion_sort.h"
#include "linked_list.h"
#include "list_queue.h"

}
#include <assert.h>

// File for sandboxing and trying out code
int main(int argc, char **argv)
{
    queue test;
    init_queue(&test);
    assert(empty(&test) == 1);

    /*Test case (B)*/
    int x = 5;
    enqueue(&test, x);
    int y = dequeue(&test);
    assert(empty(&test) == 1 && x == y);

    /*Test case (C)*/
    int x0 = 3;
    int x1 = 4;
    enqueue(&test, x0);
    enqueue(&test, x1);
    int y0 = dequeue(&test);
    int y1 = dequeue(&test);
    assert(empty(&test) == 1 && x0 == y0 && x1 == y1);

    

    return 0;
}