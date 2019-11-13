# POINTERS Vs. REFERENCES

## References

---

    References must be initialized when they are declared. This means that a reference will always point to data that was intentionally assigned to it. 

    References can not be null. This means that a reference should point to meaningful data in the program.	Pointers can be null. In fact, if a pointer is not initialized immediately, it is often best practice to initialize to nullptr, a special type which indicates that the pointer is null.

---

## Pointers

---

    Pointers can be declared without being initialized, which is dangerous. If this happens mistakenly, the pointer could be pointing to an arbitrary address in memory, and the data associated with that address could be meaningless, leading to undefined behavior and difficult-to-resolve bugs.

    When used in a function for pass-by-reference, the reference can be used just as a variable of the same type would be.	When used in a function for pass-by-reference, a pointer must be dereferenced in order to access the underlying object.

---