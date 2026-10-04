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

For the given input, Max Heap insertion required 7 comparisons and
5 swaps.

---

## 2. Heap Sort

During Heap Sort, comparisons are performed between a node and its
children while maintaining the Max Heap. The swaps shown below count
only the swaps performed during heap construction and heapify operations.

The exchange of the root with the last element during extraction is not
included as a heapify swap.

| Step | Operation | Comparisons | Heapify Swaps | Array After Operation |
|---:|---|---:|---:|---|
| 1 | Build Max Heap | 8 | 4 | 90 72 85 45 65 50 30 |
| 2 | Extract 90 | 3 | 2 | 85 72 50 45 65 30 90 |
| 3 | Extract 85 | 4 | 2 | 72 65 50 45 30 85 90 |
| 4 | Extract 72 | 3 | 2 | 65 45 50 30 72 85 90 |
| 5 | Extract 65 | 2 | 1 | 50 45 30 65 72 85 90 |
| 6 | Extract 50 | 1 | 1 | 45 30 50 65 72 85 90 |
| 7 | Extract 45 | 0 | 0 | 30 45 50 65 72 85 90 |
| **Total** | | **21** | **12** | |

Therefore:

- Comparisons = 21
- Heapify swaps during extraction = 8
- Swaps during initial heap construction = 4
- Total heapify swaps = 12

---

## 3. Quick Sort

Quick Sort uses the last element of each subarray as the pivot.
During partitioning, each element is compared with the pivot.

| Step | Pivot | Comparisons | Swaps | Array After Partition |
|---:|---:|---:|---:|---|
| 1 | 85 | 6 | 6 | 45 72 30 65 50 85 90 |
| 2 | 50 | 4 | 3 | 45 30 50 65 72 85 90 |
| 3 | 30 | 1 | 1 | 30 45 50 65 72 85 90 |
| 4 | 72 | 1 | 2 | 30 45 50 65 72 85 90 |
| **Total** | | **12** | **12** | |

For the given input, Quick Sort required:

- Comparisons = 12
- Swaps = 12

The swap count includes the final swap used to place the pivot in its
correct position.

---

## 4. Overall Comparison

| Algorithm | Comparisons | Swaps |
|---|---:|---:|
| Max Heap Insertion | 7 | 5 |
| Heap Sort | 21 | 12 |
| Quick Sort | 12 | 12 |

## Observation

For the given input, Quick Sort required fewer comparisons than Heap
Sort. Heap Sort required more comparisons because it repeatedly compares
parent and child elements while maintaining the heap property.

The number of comparisons and swaps depends on the input data and the
specific implementation of the algorithm.

Heap Sort provides a guaranteed O(n log n) worst-case time complexity,
while Quick Sort can have O(n²) worst-case time complexity depending on
pivot selection.
