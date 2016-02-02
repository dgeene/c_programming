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
    unsigned char ii;
    for (ii = 0; ii < MAX_MEMORY_POOL_NODES; ii++)
    {
        allocNode.array[ii] = (NODE *)malloc(sizeof(NODE));
        allocNode.array[ii]->nodeAllocated = 0;
        allocNode.nodeCounter++;
    }
}


/*
 * get memory from the pool of nodes
 */
NODE *getFreeNodeFromPool()
{
    int ii;

    for (ii = 0; ii < MAX_MEMORY_POOL_NODES; ii++)
    {
        if (allocNode.array[ii]->nodeAllocated == 0)
        {
            allocNode.array[ii]->nodeAllocated = 1;
            allocNode.nodeCounter--;
            break;
        }
    }
    if (ii == MAX_MEMORY_POOL_NODES)
    {
        printf("No free nodes available.\n");
        return NULL;
    }
    return allocNode.array[ii];
}



/*
 * Return a node to the memory pool
 */
void addNodeToMemoryPool(unsigned char i)
{
    if (allocNode.array[i]->nodeAllocated ==1)
    {
        allocNode.array[i]->data = 0;
        allocNode.array[i]->nodeAllocated = 0;
        allocNode.nodeCounter++;
    } else {
        printf("No nodes to add.\n");
        return;
    }
}


/*
 * Deallocate the memory pool
 */
void deallocatePool()
{
    unsigned char ii;
    for (ii = 0; ii < MAX_MEMORY_POOL_NODES; ii++)
    {
        free(allocNode.array[ii]);
    }
}



int main()
{
    unsigned char uindx, ii;

    printf("size node: %d\n", sizeof(NODE));
    printf("size mem pool: %d\n", sizeof(MEMORYPOOL));
    printf("size alloc node: %d\n", sizeof(allocNode));

    initializeMemoryPool();
    printf("size alloc node after init: %d\n", sizeof(allocNode));


    // get the node from the memory pool
    for (uindx = 0; uindx < MAX_MEMORY_POOL_NODES; uindx++)
    {
        NODE *node = NULL;
        int data;

        node = getFreeNodeFroPool();

        if (node)
        {
            printf("Enter the Data to be entered in the LinkList \n");
            scanf("%d", &data);

            node->data = data;
        }

        // display data
    }



    return 0;
}
