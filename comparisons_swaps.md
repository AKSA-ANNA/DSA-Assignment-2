# Comparisons and Swaps Observed

## 1. Max Heap Insertion

During Max Heap insertion, each newly inserted element is compared with
its parent. If the new element is greater than its parent, they are
swapped to maintain the Max Heap property.

| Inserted Value | Swaps Performed |
|---:|---:|
| 45 | 0 |
| 72 | 1 |
| 30 | 0 |
| 90 | 2 |
| 65 | 0 |
| 50 | 1 |
| 85 | 1 |

### Total Swaps

Total number of swaps during Max Heap insertion = **5**

The number of comparisons depends on the height travelled by each
inserted element. An element may require multiple comparisons and swaps
when it moves upward through the heap.

---

## 2. Heap Sort

During Heap Sort, comparisons are performed while maintaining the Max
Heap. The parent element is compared with its left and right children to
find the largest element.

Swaps occur when:

- The root is exchanged with the last element during extraction.
- Heapify moves an element downward to restore the Max Heap property.

The trace shows the array after each extraction, allowing the swaps and
changes in heap structure to be observed.

Heap Sort has a time complexity of **O(n log n)** in the best, average,
and worst cases.

---

## 3. Quick Sort

During Quick Sort, comparisons are performed between the elements and
the selected pivot during partitioning.

The program uses the **last element as the pivot**.

The important partition steps observed were:

| Pivot | Array After Partition |
|---:|---|
| 85 | 45 72 30 65 50 85 90 |
| 50 | 45 30 50 65 72 85 90 |
| 30 | 30 45 50 65 72 85 90 |
| 72 | 30 45 50 65 72 85 90 |

Swaps occur when an element smaller than the pivot is moved to the
correct position during partitioning.

For the given input, Quick Sort successfully produces the sorted array:

`30 45 50 65 72 85 90`

---

## Observation

For the given input:

- Max Heap insertion required **5 swaps**.
- Heap Sort repeatedly performed heap maintenance and extraction.
- Quick Sort performed partitioning using the last element as the pivot.
- Both Heap Sort and Quick Sort produced the same final sorted order.
