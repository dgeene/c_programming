#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_MEMORY_POOL_NODES 10

//node
typedef struct node
{
    int data;
    int nodeAllocated;
}NODE;

typedef struct MemoryPool
{
    NODE *array[MAX_MEMORY_POOL_NODES];
    int nodeCounter;
}MEMORYPOOL;



MEMORYPOOL allocNode;

// init the memory pool
void initializeMemoryPool()
{
    unsigned char uIndx;

    for (uIndx = 0; uIndx < MAX_MEMORY_POOL_NODES; uIndx++)
    {
        allocNode.array[uIndx] = (NODE *)malloc(sizeof(NODE));
        allocNode.array[uIndx]->nodeAllocated = 0;
        allocNode.nodeCounter++;
    }
}



int main()
{

    printf("size node: %d\n", sizeof(NODE));
    printf("size mem pool: %d\n", sizeof(MEMORYPOOL));
    printf("size alloc node: %d\n", sizeof(allocNode));
    initializeMemoryPool();
    printf("size alloc node after init: %d\n", sizeof(allocNode));
    return 0;
}



NODE *getFreeNodeFromPool()
{
    int i;
}
