
`std::map` is a balanced binary search tree, it keeps elements sorted based on the keys, 
Insertions, deletions and searches have logarithmic time complexity.
Plus, keys must be unique within the map.

`std::unordered_map` is a hash table. 
Unspecific order, with constant-time complexity,for average-case 
insertions, deletions, and searches. 
Keys must be unique as well.

Need the elements to be sorted by keys or require efficient range-based operations?
`std::map` is a good choice.

Prioritize constant-time lookups and insertions? Don't need a specific order? 
`std::unordered_map` can provide better performance.

constant time (O(1)) 
linear time (O(n))

List (std::list) is a doubly-linked list container, storing in a linear sequence. 
It allows efficient insertion and removal of elements at any position, 
but direct access to elements by index is slower,
compared to random-access containers like vector.

