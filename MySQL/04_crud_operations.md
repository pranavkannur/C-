# CRUD Operations - Lean Notes 🚀

## 1. Create (Insert)

### Single Row
```sql
INSERT INTO students (name, gpa)
VALUES ('Pranav', 8.3);
```

### Multiple Rows
```sql
INSERT INTO students (name, gpa)
VALUES 
    ('Nik', 9.45),
    ('Sam', 9.0);
```

---

## 2. Read (Select)

### View all columns
```sql
SELECT * FROM students;
```

### View specific columns
```sql
SELECT name, gpa FROM students;
```

---

## 3. Update 🛑
**Important: Always use a WHERE clause or you'll update everyone!**

```sql
UPDATE students 
SET gpa = 8.5 
WHERE name = 'Pranav';
```

---

## 4. Delete 🛑
```sql
DELETE FROM students 
WHERE id = 2;
```
