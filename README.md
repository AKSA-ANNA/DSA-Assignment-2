# DSA-Assignment-2
# DSA Assignment 2

## Hospital Priority Queue

This assignment implements a hospital priority queue using a Max Heap
and compares Heap Sort and Quick Sort using the given patient severity
scores.

## Input Data

Number of patients: 7

Severity scores:

45 72 30 90 65 50 85

## Source Code

The following C programs are included:

- `maxheap.c` – Inserts the given patient severity scores into a Max Heap.
- `heapsort.c` – Sorts the severity scores using Heap Sort.
- `quicksort.c` – Sorts the severity scores using Quick Sort.

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

## Analysis

`analysis.md` contains the analysis and justification, including:

- Complexity analysis
- Comparison of Heap Sort and Quick Sort
- Hospital priority queue analysis


## Final Conclusion

The Max Heap was successfully constructed using the given patient
severity scores. Heap Sort and Quick Sort were also implemented to sort
the same set of severity scores.

The final sorted output obtained was:

`30 45 50 65 72 85 90`

The Max Heap is suitable for the hospital priority queue because it
provides immediate access to the patient with the highest severity
score and supports efficient insertion and deletion operations.
