# Analysis and Justification

## Heap Structure and Height

The final Max Heap obtained after inserting the given patient severity
scores is:

        90
       /  \
     72    85
    /  \   / \
   45  65 30 50

The heap contains 7 nodes and 3 levels.

Therefore:

- Number of nodes = 7
- Number of levels = 3
- Height = 2 edges

The maximum severity score, 90, is present at the root of the Max Heap.

## Justification

A Max Heap is suitable for implementing the hospital priority queue
because patients with higher severity scores have higher priority.

The highest-priority patient is always maintained at the root of the
Max Heap. Therefore, the highest-priority patient can be accessed
immediately.

The operations have the following complexities:

- Access highest-priority patient: O(1)
- Insert a new patient: O(log n)
- Delete the highest-priority patient: O(log n)

Since patients continuously arrive and the hospital needs to identify
the highest-priority patient immediately, a Max Heap provides an
efficient solution for the priority queue.
