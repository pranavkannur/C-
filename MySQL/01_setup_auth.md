# MySQL Setup & Auth - Lean Notes 🚀

## 1. Login to MySQL
**Important: Run these in your terminal (CMD/Powershell/Bash)**

```bash
mysql -u root -p
```
*Note: You will be prompted for your password after pressing enter.*

---

## 2. Password Management
**Important: Use single quotes for passwords.** 🛑

### Set/Change Password
```sql
ALTER USER 'root'@'localhost' IDENTIFIED BY 'new_password_here';
FLUSH PRIVILEGES; -- 🛑 Required to apply changes immediately
```

### Exit MySQL
```sql
exit;
-- or
quit;
```
