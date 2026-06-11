# MySQL Data Types - Lean Notes 🚀

[Official Reference](https://dev.mysql.com/doc/refman/8.0/en/data-types.html)

## 1. Numeric Types
- **INT**: Standard integer.
- **DECIMAL(m, d)**: Exact decimal (e.g., `DECIMAL(10,2)` for money).
- **FLOAT / DOUBLE**: Approximate decimals (for science/math).

## 2. String Types
- **VARCHAR(size)**: Variable length (use for names, emails).
- **CHAR(size)**: Fixed length (use for codes like 'US', 'IN').
- **TEXT**: Long form text (paragraphs).

## 3. Date & Time
- **DATE**: `YYYY-MM-DD`
- **DATETIME**: `YYYY-MM-DD HH:MM:SS`
- **TIMESTAMP**: Tracks when a row was changed ⏱️.

## 4. Other
- **BOOLEAN**: Actually just an `INT` (0 = false, 1 = true).
- **BLOB**: Binary data (images/files). 🛑 Usually better to store file paths instead!
