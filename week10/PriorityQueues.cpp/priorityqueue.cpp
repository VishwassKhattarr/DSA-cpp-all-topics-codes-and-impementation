#include <iostream>
#include <vector>
using namespace std;

class PriorityQueue
{
    vector<int> pq;

public:
    PriorityQueue()
    {
    }

    bool isEmpty()
    {
        return pq.size() == 0;
    }
    // return size of pq=no. of elements
    int getSize()
    {
        return pq.size();
    }

    int getMin()
    {

        if (isEmpty())
        {
            return 0; // priority queue is empty
        }
        return pq[0];
    }

    void insert(int element)
    {
        pq.push_back(element);
        int childIndex = pq.size() - 1;
        int parentIndex = (childIndex - 1) / 2;
        while (childIndex > 0)
        {

            if (pq[childIndex] < pq[parentIndex])
            {
                int temp = pq[childIndex];
                pq[childIndex] = pq[parentIndex];
                pq[parentIndex] = temp;
            }
            else
            {
                break;
            }
            childIndex = parentIndex;
        }
    }

    void inplaceHeapSort(int pq[], int n)
    {
        // build the heap in input array
        for (int i = 0; i < n; i++)
        {
            int childIndex = i;
          
            while (childIndex > 0)
            {
                  int parentIndex = (childIndex - 1) / 2;

                if (pq[childIndex] < pq[parentIndex])
                {
                    int temp = pq[childIndex];
                    pq[childIndex] = pq[parentIndex];
                    pq[parentIndex] = temp;
                }
                else
                {
                    break;
                }
                childIndex = parentIndex;
            }
        }
        //remove elements
        int size=n;
        while(size>1){
        int temp=pq[0];
        pq[0]=pq[size-1];
        pq[size-1]=temp;
        size--;
         int parentIndex = 0;
        int leftChildIndex = 2 * parentIndex + 1;
        int rightChildIndex = 2 * parentIndex + 2;
        while (leftChildIndex < size)
        {

            int minIndex = parentIndex;
            if (pq[minIndex] > pq[leftChildIndex])
            {
                minIndex = leftChildIndex;
            }
            if (rightChildIndex < size && pq[rightChildIndex] < pq[minIndex])
            {
                minIndex = rightChildIndex;
            }
            if (minIndex == parentIndex)
            {
                break;
            }
            int temp = pq[minIndex];
            pq[minIndex] = pq[parentIndex];
            pq[parentIndex] = temp;

            parentIndex = minIndex;
            leftChildIndex = 2 * parentIndex + 1;
            rightChildIndex = 2 * parentIndex + 2;
        }
       


    }
    }

    

    int removeMin()
    {
        if (isEmpty())
        {
            return 0;
        }
        int ans = pq[0];
        pq[0] = pq[pq.size() - 1];
        pq.pop_back();

        // down-heapify
        int parentIndex = 0;
        int leftChildIndex = 2 * parentIndex + 1;
        int rightChildIndex = 2 * parentIndex + 1;
        while (leftChildIndex < pq.size())
        {

            int minIndex = parentIndex;
            if (pq[minIndex] > pq[leftChildIndex])
            {
                minIndex = leftChildIndex;
            }
            if (rightChildIndex < pq.size() && pq[rightChildIndex] < pq[minIndex])
            {
                minIndex = rightChildIndex;
            }
            if (minIndex == parentIndex)
            {
                break;
            }
            int temp = pq[minIndex];
            pq[minIndex] = pq[parentIndex];
            pq[parentIndex] = temp;

            parentIndex = minIndex;
            leftChildIndex = 2 * parentIndex + 1;
            rightChildIndex = 2 * parentIndex + 2;
        }
        return ans;
    }
};