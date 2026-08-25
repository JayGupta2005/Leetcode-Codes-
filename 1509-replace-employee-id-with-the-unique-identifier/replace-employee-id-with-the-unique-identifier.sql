# Write your MySQL query statement below
SELECT EUI.unique_id, E.name 
FROM EMPLOYEES AS E
LEFT JOIN EMPLOYEEUNI AS EUI
ON E.ID = EUI.ID

