# Trace Tables

## 1. Max Heap Insertion

| Step | Inserted Value | Heap |

| 1 | 45 | 45 |
| 2 | 72 | 72 45 |
| 3 | 30 | 72 45 30 |
| 4 | 90 | 90 72 30 45 |
| 5 | 65 | 90 72 30 45 65 |
| 6 | 50 | 90 72 50 45 65 30 |
| 7 | 85 | 90 72 85 45 65 30 50 |

### Final Max Heap

`90 72 85 45 65 30 50`

---

## 2. Heap Sort

### Initial Max Heap

`90 72 85 45 65 50 30`

| Step | Array |

| Initial Max Heap | 90 72 85 45 65 50 30 |

| 1st extraction | 85 72 50 45 65 30 90 |
| 2nd extraction | 72 65 50 45 30 85 90 |
| 3rd extraction | 65 45 50 30 72 85 90 |
| 4th extraction | 50 45 30 65 72 85 90 |
| 5th extraction | 45 30 50 65 72 85 90 |
| 6th extraction | 30 45 50 65 72 85 90 |

### Final Output

`30 45 50 65 72 85 90`

---

## 3. Quick Sort

Using the last element as the pivot:

| Step | Pivot | Array after partition |
|---|---:|---|
| 1 | 85 | 45 72 30 65 50 85 90 |
| 2 | 50 | 45 30 50 65 72 85 90 |
| 3 | 30 | 30 45 50 65 72 85 90 |
| 4 | 72 | 30 45 50 65 72 85 90 |

### Final Output

`30 45 50 65 72 85 90`
