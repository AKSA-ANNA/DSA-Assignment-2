# DSA Assignment 2

## Hospital Priority Queue

This assignment implements a hospital priority queue using a Max Heap
and compares Heap Sort and Quick Sort using the given patient severity
scores.

## Input Data

Number of patients: 7

Severity scores:

`45 72 30 90 65 50 85`

## Source Code

The following C programs are included in the `source-code` folder:

- `source-code/max_heap.c` – Inserts the given patient severity scores
  into a Max Heap.
- `source-code/heap_sort.c` – Sorts the severity scores using Heap Sort.
- `source-code/quick_sort.c` – Sorts the severity scores using Quick Sort.

## Output

The `output` folder contains the output screenshots obtained by
executing the three programs.

The programs produce the following final results:

- Final Max Heap: `90 72 85 45 65 30 50`
- Heap Sort: `30 45 50 65 72 85 90`
- Quick Sort: `30 45 50 65 72 85 90`

## Trace Table

`trace_table.md` contains the important intermediate steps and trace
tables for:

- Max Heap insertion
- Heap Sort
- Quick Sort

## Analysis and Justification

`analysis.md` contains the analysis and justification, including:

- Max Heap structure and height
- Number of nodes and levels
- Suitability of Max Heap for the hospital priority queue
- Time complexity of priority queue operations

## Comparisons, Swaps, Complexity and Comparison Table

`comparisons_swaps_table.md` contains:

- Number of comparisons and swaps observed
- Max Heap insertion analysis
- Heap Sort analysis
- Quick Sort analysis
- Heap Sort and Quick Sort complexity comparison
- Time complexity
- Space complexity
- Stability comparison
- Overall observations

## Final Conclusion

`final_conclusion.md` contains the final conclusion of the assignment.

The Max Heap is suitable for the hospital priority queue because the
patient with the highest severity score is always maintained at the
root, allowing immediate access to the highest-priority patient.

For the given data, both sorting algorithms produced the sorted
severity scores:

`30 45 50 65 72 85 90`
