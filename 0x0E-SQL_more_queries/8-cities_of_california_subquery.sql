-- A script to list all cities of california found in database hbtn_0d_usa
SELECT `id`, `name` FROM `hbtn_0d_usa`.`cities`
WHERE `cities`.`state_id` = 1
ORDER BY `cities`.`id`;
