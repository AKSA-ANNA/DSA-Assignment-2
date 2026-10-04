# Comparisons and Swaps Observed

## 1. Max Heap Insertion

During Max Heap insertion, the newly inserted element is compared with
its parent. If the new element is greater than its parent, a swap is
performed to maintain the Max Heap property.

| Inserted Value | Comparisons | Swaps |
|---:|---:|---:|
| 45 | 0 | 0 |
| 72 | 1 | 1 |
| 30 | 1 | 0 |
| 90 | 2 | 2 |
| 65 | 1 | 0 |
| 50 | 1 | 1 |
| 85 | 1 | 1 |
| **Total** | **7** | **5** |

For the given input, Max Heap insertion required **7 comparisons and
5 swaps**.

---

## 2. Heap Sort

During Heap Sort, comparisons are performed between a node and its
children while maintaining the Max Heap. Swaps occur during heap
construction, heapify operations, and maximum-element extraction.

| Step | Operation | Comparisons | Swaps | Array After Operation |
|---:|---|---:|---:|---|
| 1 | Build Max Heap | 8 | 4 | 90 72 85 45 65 50 30 |
| 2 | Extract 90 | 3 | 2 | 85 72 50 45 65 30 90 |
| 3 | Extract 85 | 4 | 2 | 72 65 50 45 30 85 90 |
| 4 | Extract 72 | 3 | 2 | 65 45 50 30 72 85 90 |
| 5 | Extract 65 | 2 | 1 | 50 45 30 65 72 85 90 |
| 6 | Extract 50 | 1 | 1 | 45 30 50 65 72 85 90 |
| 7 | Extract 45 | 0 | 1 | 30 45 50 65 72 85 90 |
| **Total** | | **21** | **13** | |

The total number of swaps during the extraction and heapify operations
is **13**.

Including the swaps performed while building the initial Max Heap, the
total number of swaps in the complete Heap Sort execution is **18**.

Therefore, for the complete Heap Sort execution:

- Comparisons = **21**
- Swaps = **18**

---

## 3. Quick Sort

Quick Sort uses the last element of each subarray as the pivot. During
partitioning, each element is compared with the pivot.

| Step | Pivot | Comparisons | Swaps | Array After Partition |
|---:|---:|---:|---:|---|
| 1 | 85 | 6 | 6 | 45 72 30 65 50 85 90 |
| 2 | 50 | 4 | 3 | 45 30 50 65 72 85 90 |
| 3 | 30 | 2 | 1 | 30 45 50 65 72 85 90 |
| 4 | 72 | 1 | 2 | 30 45 50 65 72 85 90 |
| **Total** | | **13** | **12** | |

For the given input, Quick Sort required:

- Comparisons = **13**
- Swaps = **12**

The swap count includes the final swap used to place the pivot in its
correct position.

---

## 4. Overall Comparison

| Algorithm | Comparisons | Swaps |
|---|---:|---:|
| Max Heap Insertion | 7 | 5 |
| Heap Sort | 21 | 18 |
| Quick Sort | 13 | 12 |

## Observation

For the given input, Quick Sort required fewer comparisons and swaps than
Heap Sort. However, the number of comparisons and swaps depends on the
input data and the implementation of the algorithm.

Heap Sort provides a guaranteed O(n log n) worst-case time complexity,
while Quick Sort can have O(n²) worst-case time complexity depending on
pivot selection.
