# use the mysql database to create a table in it with some data in it 
# use mysql
# create table test( a integer);
# insert into test values (1);
# insert into test values (1);

# # these could be the possible values for your case 
# ---------------------------------
# user='hpcap',password='hpcap',host='localhost',database='mysql'
# ---------------------------------

"""
Three ways to connect to MySQL from Python:

## 1. Using MySQL Connector/Python
MySQL Connector/Python is a pure Python implementation of the MySQL Client/Server protocol. You can install it using pip:
pip install mysql-connector-python
Replace `username`, `password`, `hostname`, `database`, and `table` with your actual values.
"""
#following code:
import mysql.connector
cnx = mysql.connector.connect(user='username', 	password='password',
                              host='hostname',
                              database='database')

cursor = cnx.cursor()

query = "SELECT * FROM table"

cursor.execute(query)

for row in cursor.fetchall():
    print(row)

cnx.close()


"""
## 2. Using PyMySQL

PyMySQL is a Python library that implements the MySQL protocol. You can install it using pip:
pip install PyMySQL
Replace `username`, `password`, `hostname`, `database`, and `table` with your actual values.
"""

#following code:

import pymysql

cnx = pymysql.connect(user='username', password='password',
                              host='hostname',
                              database='database')

cursor = cnx.cursor()

query = "SELECT * FROM table"

cursor.execute(query)

for row in cursor.fetchall():
    print(row)

cnx.close()


"""## 3. Using SQLAlchemy

SQLAlchemy is a Python SQL toolkit and Object-Relational Mapping (ORM) library. It provides a way to connect to various databases including MySQL. You can install it using pip:

pip install SQLAlchemy
Replace `username`, `password`, `hostname`, `database`, and `table` with your actual values.

"""

# following code:
from sqlalchemy import create_engine,text

engine = create_engine("mysql+pymysql://username:password@hostname/database")

with engine.connect() as connection:
    result = connection.execute(text("SELECT * FROM table"))
    for row in result:
        print(row)

engine.dispose()


# a full fledged example doing all the CRUD operations
import mysql.connector

# Connect to the MySQL database
cnx = mysql.connector.connect(user='username', password='password',
                              host='hostname',
                              database='database')

# Create a cursor object to execute SQL queries
cursor = cnx.cursor()

# CREATE TABLE command - create a new table in the database
create_table_query = "CREATE TABLE <table> (col1 VARCHAR(255), col2 VARCHAR(255), col3 VARCHAR(255))"
cursor.execute(create_table_query)

# INSERT command - insert a new record into the table
insert_query = "INSERT INTO <table> (col1, col2, col3) VALUES (%s, %s, %s)"
record_to_insert = ('value1', 'value2', 'value3')
cursor.execute(insert_query, record_to_insert)
cnx.commit()

# SELECT command - select records from the table
select_query = "SELECT * FROM <table> WHERE col1 = %s"
value = ('value1',)
cursor.execute(select_query, value)
result_set = cursor.fetchall()
for row in result_set:
    print(row)

# UPDATE command - update a record in the table
update_query = "UPDATE <table> SET col2 = %s WHERE col1 = %s"
values = ('new_value2', 'value1')
cursor.execute(update_query, values)
cnx.commit()

# DELETE command - delete a record from the table
delete_query = "DELETE FROM <table> WHERE col1 = %s"
value = ('value1',)
cursor.execute(delete_query, value)
cnx.commit()

# DROP TABLE command - drop the table from the database
drop_table_query = "DROP TABLE <table>"
cursor.execute(drop_table_query)

# Close the cursor and database connections
cursor.close()
cnx.close()


