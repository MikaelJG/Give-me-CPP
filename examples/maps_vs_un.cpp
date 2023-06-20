
`std::map` is a balanced binary search tree, typically a red-black tree. 
It maintains the elements in a sorted order based on the keys, 
Meaning logarithmic time complexity for insertions, deletions, and searches. 
The keys must be unique within the map.

On the other hand, `std::unordered_map` is implemented as a hash table. 
It does not maintain any specific order, but mostly provides constant-time complexity
for average-case insertions, deletions, and searches. 
The keys do not need to have a specific order, but they must be unique within the unordered map.

Need the elements to be sorted by keys or require efficient range-based operations?
`std::map` is a good choice.

Prioritize constant-time lookups and insertions? Don't need a specific order? 
`std::unordered_map` can provide better performance.

