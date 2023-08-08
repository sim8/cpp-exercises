# Pointers and references

- `char v[6]` array of chars
- `char* p` pointer to char
- `*p` "contents of" (object that p points to)
- `&v[3]` "address of" (address of object in memory)
    - In a declaration, `boolean&` means "reference to"
        - Similar to a pointer, but you don't need `*` prefix to access value
        - References are useful for function args if you want to mutate those args (reference ensures it's not copied)
- `for (auto x : v)` (no braces) simple loop
- `for (auto& x : v)` holds a reference rather than copying
- `nullptr` singular value used for "no value"
    - Often might want to check e.g. `p == nullptr` before using val
- REFERENCES
  - Think of it like an alias (a 2nd reference to a variable)
  - Differences to pointers
    - Cannot have null references
    - Can't be changed to refer to another obj
    - Must be initialised when created