# Complexity Analysis, Comparison and Conclusion

## 1. Complexity Analysis

### Max Heap Insertion

Each new element is inserted at the bottom of the heap and moved upward until the Max Heap property is satisfied.

- Best Case: O(1)
- Average Case: O(log n)
- Worst Case: O(log n)
- Space Complexity: O(n) for storing the heap

For n insertions, the overall complexity is O(n log n).

### Heap Sort

Heap Sort first builds a Max Heap and then repeatedly removes the maximum element.

- Best Case: O(n log n)
- Average Case: O(n log n)
- Worst Case: O(n log n)
- Auxiliary Space: O(1)

### Quick Sort

Quick Sort partitions the array around a pivot and recursively sorts the
subarrays.

- Best Case: O(n log n)
- Average Case: O(n log n)
- Worst Case: O(n²)
- Space Complexity: O(log n) average case due to recursion

---

## 2. Comparison Table

| Feature | Heap Sort | Quick Sort |
|---|---|---|
| Technique | Heap-based sorting | Divide and conquer |
| Best Case | O(n log n) | O(n log n) |
| Average Case | O(n log n) | O(n log n) |
| Worst Case | O(n log n) | O(n²) |
| Auxiliary Space | O(1) | O(log n) average |
| Stable | No | No |

---

## 3. Hospital Priority Queue Analysis

A Max Heap is suitable for the hospital priority queue because a patient with the highest severity score is always maintained at the root of the heap.

- Highest-priority patient access: O(1)
- Patient insertion: O(log n)
- Highest-priority patient deletion: O(log n)

This allows the hospital to continuously insert patients while efficiently accessing the patient with the highest severity.

---

