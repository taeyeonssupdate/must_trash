-- 實習五(SQLSQL綜合練習)：
-- 1.請列出薪資高於60000(SQL不含)的教師代號,姓名以及薪資
SELECT 教師代號, 教師姓, 教師名, 薪資
FROM dbo.教師
WHERE 薪資 > 60000;
-- 2.請計算薪資高於60000(SQL不含) 的教師人數，只要列出人數
SELECT COUNT(*) as 教師人數
FROM dbo.教師
WHERE 薪資 > 60000;
-- 3.列出每個教師開了幾門課，列出教師代號以及開課數
SELECT 教師代號, COUNT(*) as 開課數
FROM dbo.課程
GROUP BY 教師代號;
-- 4.列出每個學生的學號，姓名，以及平均修課成績
SELECT dbo.選修.學生代號, AVG(修課成績) as 平均修課成績
FROM dbo.學生, dbo.選修
WHERE dbo.學生.學生代號 = dbo.選修.學生代號
GROUP BY dbo.選修.學生代號;
-- 5.列出2003年每個課程的選修人數，列出課號及人數
SELECT dbo.選修.課程代號, COUNT(*) as 選修人數
FROM dbo.選修, dbo.課程
WHERE dbo.課程.課程代號 = dbo.選修.課程代號 and 開課年份=2003
GROUP BY dbo.選修.課程代號;
-- 6.列出2003年選課數目小於3(SQL不包含)門課的學生代號，姓名以及選課數目
SELECT dbo.選修.學生代號, 學生姓, 學生名, COUNT(*) as 選課數目
FROM dbo.選修, dbo.課程, dbo.學生
WHERE dbo.課程.課程代號=dbo.選修.課程代號
    AND dbo.學生.學生代號=dbo.選修.學生代號
    AND 開課年份=2003
GROUP BY dbo.選修.學生代號, 學生姓, 學生名
HAVING COUNT(*) < 3;
-- 7.列出總成績等級大於全部學生之平均總成績等級的學生資料(SQL列出所有欄位)
SELECT *
FROM dbo.學生
WHERE 總成績等級 > (SELECT AVG(總成績等級) FROM dbo.學生);
