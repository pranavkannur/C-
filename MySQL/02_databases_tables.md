# Databases & Tables - Lean Notes 🚀

## 1. Database Operations

### View all databases
```sql
SHOW DATABASES;
```

### Create a database
```sql
CREATE DATABASE school_db;
```

### Select a database
```sql
USE school_db; -- 🤧 Always do this before creating tables!
```

### Delete a database
```sql
DROP DATABASE school_db; -- 🛑 Warning: Deletes everything inside!
```

---

## 2. Table Operations

### Create a Table
```sql
CREATE TABLE students (
    id INT PRIMARY KEY AUTO_INCREMENT,
    name VARCHAR(50) NOT NULL,
    gpa DECIMAL(3, 2)
);
```

### View Table Info
```sql
SHOW TABLES;        -- List all tables in current DB
DESCRIBE students;  -- View columns, types, and keys
```

### Delete a Table
```sql
DROP TABLE students;
```
