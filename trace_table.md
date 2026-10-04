# Trace Tables

## Given Input

The patient severity scores are:

`45 72 30 90 65 50 85`

Higher severity score indicates higher priority.

---

## 1. Max Heap Insertion Trace

The given severity scores are inserted one by one into a Max Heap. After each insertion, the heap is adjusted using heapify-up to maintain the Max Heap property.

| Step | Inserted Value | Heap After Insertion |
|---:|---:|---|
| 1 | 45 | 45 |
| 2 | 72 | 72 45 |
| 3 | 30 | 72 45 30 |
| 4 | 90 | 90 72 30 45 |
| 5 | 65 | 90 72 30 45 65 |
| 6 | 50 | 90 72 50 45 65 30 |
| 7 | 85 | 90 72 85 45 65 30 50 |

### Final Max Heap

        90
       /  \
     72    85
    /  \   / \
   45  65 30  50

The final Max Heap is:

`90 72 85 45 65 30 50`

---

## 2. Heap Sort Trace

Heap Sort first constructs a Max Heap from the given severity scores. The maximum element is then repeatedly extracted and placed at the end of the array. The remaining elements are heapified after each extraction.

| Step | Operation | Array After Operation |
|---:|---|---|
| 1 | Build Max Heap | 90 72 85 45 65 50 30 |
| 2 | Extract 90 | 85 72 50 45 65 30 90 |
| 3 | Extract 85 | 72 65 50 45 30 85 90 |
| 4 | Extract 72 | 65 45 50 30 72 85 90 |
| 5 | Extract 65 | 50 45 30 65 72 85 90 |
| 6 | Extract 50 | 45 30 50 65 72 85 90 |
| 7 | Extract 45 | 30 45 50 65 72 85 90 |

### Final Sorted Array

`30 45 50 65 72 85 90`

---

## 3. Quick Sort Trace

Quick Sort is performed using the last element as the pivot. After each partition operation, the array is shown below.

| Step | Pivot | Array After Partition |
|---:|---:|---|
| 1 | 85 | 45 72 30 65 50 85 90 |
| 2 | 50 | 45 30 50 65 72 85 90 |
| 3 | 30 | 30 45 50 65 72 85 90 |
| 4 | 72 | 30 45 50 65 72 85 90 |

### Final Sorted Array

`30 45 50 65 72 85 90`

---

## Summary of Trace

| Algorithm | Final Result |
|---|---|
| Max Heap Insertion | 90 72 85 45 65 30 50 |
| Heap Sort | 30 45 50 65 72 85 90 |
| Quick Sort | 30 45 50 65 72 85 90 |
