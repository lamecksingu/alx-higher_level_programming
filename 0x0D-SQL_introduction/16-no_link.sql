-- A script to list all records of the table second_table with some conditions
SELECT score, name FROM second_table
WHERE name != ""
ORDER BY score DESC;
