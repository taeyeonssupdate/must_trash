--請拉到最底 刪除腳本

-- Drop Table Statements for the tables in the University Database.

if exists (select * from sysobjects where id = object_id(N'[dbo].[選修]') and OBJECTPROPERTY(id, N'IsUserTable') = 1)
drop table [dbo].[選修]
GO

if exists (select * from sysobjects where id = object_id(N'[dbo].[課程]') and OBJECTPROPERTY(id, N'IsUserTable') = 1)
drop table [dbo].[課程]
GO

if exists (select * from sysobjects where id = object_id(N'[dbo].[科目]') and OBJECTPROPERTY(id, N'IsUserTable') = 1)
drop table [dbo].[科目]
GO

if exists (select * from sysobjects where id = object_id(N'[dbo].[教師]') and OBJECTPROPERTY(id, N'IsUserTable') = 1)
drop table [dbo].[教師]
GO

if exists (select * from sysobjects where id = object_id(N'[dbo].[學生]') and OBJECTPROPERTY(id, N'IsUserTable') = 1)
drop table [dbo].[學生]
GO


-- Create Table Statments for the tables in the University Database

CREATE TABLE [dbo].[學生] (
	[學生代號] [char] (11) NOT NULL ,
	[學生姓] [varchar] (30) NOT NULL , 
	[學生名] [varchar] (30) NOT NULL , 
	[城市] [varchar] (30) NOT NULL , 
	[州] [char] (2) NOT NULL , 
	[郵遞區號] [char] (10) NOT NULL , 
	[主修科目] [char] (6) NULL , 
	[班級] [char] (2) NULL , 
	[總成績等級] [decimal] (3,2) NULL 
) ON [PRIMARY]
GO

ALTER TABLE [dbo].[學生] WITH NOCHECK ADD 
	CONSTRAINT [PK_Student] PRIMARY KEY  NONCLUSTERED 
	(
		[學生代號]
	)  ON [PRIMARY] 

GO


CREATE TABLE [dbo].[教師] (
	[教師代號] [char] (11) NOT NULL ,
	[教師姓] [varchar] (30) NOT NULL , 
	[教師名] [varchar] (30) NOT NULL , 
	[城市] [varchar] (30) NOT NULL , 
	[州] [char] (2) NOT NULL , 
	[郵遞區號] [char] (10) NOT NULL , 
	[等級] [char] (4) NULL , 
	[聘僱日期] [datetime] NULL , 
	[薪資] [decimal] (10,2) NULL,
	[上級老闆] [char] (11) NULL,
	[科系] [char] (6) NULL
 
) ON [PRIMARY]
GO

ALTER TABLE [dbo].[教師] WITH NOCHECK ADD 
	CONSTRAINT [PK_Faculty] PRIMARY KEY  NONCLUSTERED 
	(
		[教師代號]
	)  ON [PRIMARY] 
GO


CREATE TABLE [dbo].[科目] (
	[科目代號] [char] (6) NOT NULL ,
	[科目描述] [varchar] (50) NOT NULL , 
	[科目學分數] [int] NULL
 
) ON [PRIMARY]
GO

ALTER TABLE [dbo].[科目] WITH NOCHECK ADD 
	CONSTRAINT [PK_Course] PRIMARY KEY  NONCLUSTERED 
	(
		[科目代號]
	)  ON [PRIMARY] 
GO


CREATE TABLE [dbo].[課程] (
	[課程代號] [int] NOT NULL ,
	[科目代號] [char] (6) NOT NULL , 
	[開課學期] [char] (6) NOT NULL , 
	[開課年份] [int] NOT NULL , 
	[上課地點] [varchar] (30) NULL , 
	[上課時段] [varchar] (10) NULL , 
	[教師代號] [char] (11) NULL ,
	[上課日期] [char] (4) NULL
 
) ON [PRIMARY]
GO

ALTER TABLE [dbo].[課程] WITH NOCHECK ADD 
	CONSTRAINT [PK_offering] PRIMARY KEY  NONCLUSTERED 
	(
		[課程代號]
	)  ON [PRIMARY] 
GO


CREATE TABLE [dbo].[選修] (
	[課程代號] [int] NOT NULL ,
	[學生代號] [char] (11) NOT NULL , 
	[修課成績] [decimal] (3,2)  NULL
 
) ON [PRIMARY]
GO

ALTER TABLE [dbo].[選修] WITH NOCHECK ADD 
	CONSTRAINT [PK_Enrollment] PRIMARY KEY  NONCLUSTERED 
	(
		[課程代號],
		[學生代號]
	)  ON [PRIMARY] 
GO



-- Constraint statements
ALTER TABLE [dbo].[教師] WITH NOCHECK ADD  
	CONSTRAINT [FK_Faculty_Supervisor] FOREIGN KEY 
	(
		[上級老闆]
	) REFERENCES [dbo].[教師] (
		[教師代號]
	)
GO


ALTER TABLE [dbo].[課程] WITH NOCHECK ADD 
	CONSTRAINT [FK_offering_Course] FOREIGN KEY 
	(
		[科目代號]
	) REFERENCES [dbo].[科目] (
		[科目代號]
	),
	CONSTRAINT [FK_offering_Faculty] FOREIGN KEY 
	(
		[教師代號]
	) REFERENCES [dbo].[教師] (
		[教師代號]
	)
GO

ALTER TABLE [dbo].[選修] ADD 
	CONSTRAINT [FK_Enrollment_offering] FOREIGN KEY 
	(
		[課程代號]
	) REFERENCES [dbo].[課程] (
		[課程代號]
	),
	CONSTRAINT [FK_offering_Student] FOREIGN KEY 
	(
		[學生代號]
	) REFERENCES [dbo].[學生] (
		[學生代號]
	)
GO


INSERT INTO 科目
	(科目代號, 科目描述, 科目學分數)
	VALUES ( 'FIN300','FUNDAMENTALS OF FINANCE',4)

INSERT INTO 科目
	(科目代號, 科目描述, 科目學分數)
	VALUES ( 'FIN450','PRINCIPLES OF INVESTMENTS',4)
	
INSERT INTO 科目
	(科目代號, 科目描述, 科目學分數)
	VALUES ( 'FIN480','CORPORATE FINANCE',4)
	
INSERT INTO 科目
	(科目代號, 科目描述, 科目學分數)
	VALUES ('IS320','FUNDAMENTALS OF BUSINESS PROGRAMMING',4 )

INSERT INTO 科目
	(科目代號, 科目描述, 科目學分數)
	VALUES ( 'IS460','SYSTEMS ANALYSIS',4)
	
INSERT INTO 科目
	(科目代號, 科目描述, 科目學分數)
	VALUES ( 'IS470','BUSINESS DATA COMMUNICATIONS',4)

INSERT INTO 科目
	(科目代號, 科目描述, 科目學分數)
	VALUES ('IS480','FUNDAMENTALS OF DATABASE MANAGEMENT',4 )


INSERT INTO 教師
	(教師代號, 教師姓, 教師名, 城市, 州,
	 科系, 等級, 薪資, 上級老闆, 聘僱日期, 郵遞區號)
	 VALUES ('543-21-0987', 'VICTORIA', 'EMMANUEL', 'BOTHELL', 'WA', 'MS', 'PROF', 120000.0, NULL, '1992-04-01', '98011-2242')

INSERT INTO 教師
	(教師代號, 教師姓, 教師名, 城市, 州,
	 科系, 等級, 薪資, 上級老闆, 聘僱日期, 郵遞區號)
	 VALUES ('765-43-2109', 'NICKI', 'MACON', 'BELLEVUE', 'WA', 'FIN', 'PROF', 65000.00, NULL, '1992-04-01', '98015-9945')

INSERT INTO 教師
	(教師代號, 教師姓, 教師名, 城市, 州,
	 科系, 等級, 薪資, 上級老闆, 聘僱日期, 郵遞區號)
	 VALUES ('654-32-1098', 'LEONARD', 'FIBON', 'SEATTLE', 'WA','MS', 'ASSC', 70000.00, '543-21-0987', '1989-04-01', '98121-0094')

INSERT INTO 教師
	(教師代號, 教師姓, 教師名, 城市, 州,
	 科系, 等級, 薪資, 上級老闆, 聘僱日期, 郵遞區號)
	 VALUES ('098-76-5432', 'LEONARD', 'VINCE', 'SEATTLE', 'WA', 'MS', 'ASST', 35000.00, '654-32-1098', '1990-04-01', '98111-9921')

INSERT INTO 教師
	(教師代號, 教師姓, 教師名, 城市, 州,
	 科系, 等級, 薪資, 上級老闆, 聘僱日期, 郵遞區號)
	 VALUES ('876-54-3210', 'CRISTOPHER', 'COLAN', 'SEATTLE', 'WA','MS', 'ASST', 40000.00, '654-32-1098', '1994-04-01', '98114-1332')

INSERT INTO 教師
	(教師代號, 教師姓, 教師名, 城市, 州,
	 科系, 等級, 薪資, 上級老闆, 聘僱日期, 郵遞區號)
	 VALUES ('987-65-4321', 'JULIA', 'MILLS', 'SEATTLE', 'WA', 'FIN', 'ASSC', 75000.00, '765-43-2109', '1995-04-01', '98114-9954')


INSERT INTO 學生
	(學生代號, 學生姓, 學生名, 城市,
	 州, 主修科目, 班級, 總成績等級, 郵遞區號)
	VALUES ('123-45-6789','HOMER','WELLS','SEATTLE','WA','IS','FR',3.00,'98121-1111')


INSERT INTO 學生
	(學生代號, 學生姓, 學生名, 城市,
	 州, 主修科目, 班級, 總成績等級, 郵遞區號)
	VALUES ('124-56-7890','BOB','NORBERT','BOTHELL','WA','FIN','JR',2.70,'98011-2121')

INSERT INTO 學生
	(學生代號, 學生姓, 學生名, 城市,
	 州, 主修科目, 班級, 總成績等級, 郵遞區號)
	VALUES ('234-56-7890','CANDY','KENDALL','TACOMA','WA','ACCT','JR',3.50,'99042-3321')

INSERT INTO 學生
	(學生代號, 學生姓, 學生名, 城市,
	 州, 主修科目, 班級, 總成績等級, 郵遞區號)
	VALUES ('345-67-8901','WALLY','KENDALL','SEATTLE','WA','IS','SR',2.80,'98123-1141')

INSERT INTO 學生
	(學生代號, 學生姓, 學生名, 城市,
	 州, 主修科目, 班級, 總成績等級, 郵遞區號)
	VALUES ('456-78-9012','JOE','ESTRADA','SEATTLE','WA','FIN','SR',3.20,'98121-2333')

INSERT INTO 學生
	(學生代號, 學生姓, 學生名, 城市,
	 州, 主修科目, 班級, 總成績等級, 郵遞區號)
	VALUES ('567-89-0123','MARIAH','DODGE','SEATTLE','WA','IS','JR',3.60,'98114-0021')

INSERT INTO 學生
	(學生代號, 學生姓, 學生名, 城市,
	 州, 主修科目, 班級, 總成績等級, 郵遞區號)
	VALUES ('678-90-1234','TESS','DODGE','REDMOND','WA','ACCT','SO',3.30,'98116-2344')

INSERT INTO 學生
	(學生代號, 學生姓, 學生名, 城市,
	 州, 主修科目, 班級, 總成績等級, 郵遞區號)
	VALUES ('789-01-2345','ROBERTO','MORALES','SEATTLE','WA','FIN','JR',2.50,'98121-2212')

INSERT INTO 學生
	(學生代號, 學生姓, 學生名, 城市,
	 州, 主修科目, 班級, 總成績等級, 郵遞區號)
	VALUES ('876-54-3210','CRISTOPHER','COLAN','SEATTLE','WA','IS','SR',4.00,'98114-1332')

INSERT INTO 學生
	(學生代號, 學生姓, 學生名, 城市,
	 州, 主修科目, 班級, 總成績等級, 郵遞區號)
	VALUES ('890-12-3456','LUKE','BRAZZI','SEATTLE','WA','IS','SR',2.20,'98116-0021')

INSERT INTO 學生
	(學生代號, 學生姓, 學生名, 城市,
	 州, 主修科目, 班級, 總成績等級, 郵遞區號)
	VALUES ('901-23-4567','WILLIAM','PILGRIM','BOTHELL','WA','IS','SO',3.80,'98113-1885')


INSERT INTO 課程
	(課程代號, 科目代號, 開課學期, 開課年份, 上課地點, 上課時段, 教師代號, 上課日期)
	VALUES(1111, 'IS320', 'SUMMER', 2003, 'BLM302', '10:30:00', NULL, 'MW')

INSERT INTO 課程
	(課程代號, 科目代號, 開課學期, 開課年份, 上課地點, 上課時段, 教師代號, 上課日期)
	VALUES(1234, 'IS320', 'FALL', 2002, 'BLM302', '10:30:00', '098-76-5432', 'MW')

INSERT INTO 課程
	(課程代號, 科目代號, 開課學期, 開課年份, 上課地點, 上課時段, 教師代號, 上課日期)
	VALUES(2222, 'IS460', 'SUMMER', 2002, 'BLM412', '13:30:00', NULL, 'TTH')

INSERT INTO 課程
	(課程代號, 科目代號, 開課學期, 開課年份, 上課地點, 上課時段, 教師代號, 上課日期)
	VALUES(3333, 'IS320', 'SPRING', 2003, 'BLM214', '08:30:00', '098-76-5432', 'MW')

INSERT INTO 課程
	(課程代號, 科目代號, 開課學期, 開課年份, 上課地點, 上課時段, 教師代號, 上課日期)
	VALUES(4321, 'IS320', 'FALL', 2002, 'BLM214', '15:30:00', '098-76-5432', 'TTH')

INSERT INTO 課程
	(課程代號, 科目代號, 開課學期, 開課年份, 上課地點, 上課時段, 教師代號, 上課日期)
	VALUES(4444, 'IS320', 'WINTER', 2003, 'BLM302', '15:30:00', '543-21-0987', 'TTH')

INSERT INTO 課程
	(課程代號, 科目代號, 開課學期, 開課年份, 上課地點, 上課時段, 教師代號, 上課日期)
	VALUES(5555, 'FIN300', 'WINTER', 2003, 'BLM207', '08:30:00', '765-43-2109', 'MW')

INSERT INTO 課程
	(課程代號, 科目代號, 開課學期, 開課年份, 上課地點, 上課時段, 教師代號, 上課日期)
	VALUES(5678, 'IS480', 'WINTER', 2003, 'BLM302', '10:30:00', '987-65-4321', 'MW')

INSERT INTO 課程
	(課程代號, 科目代號, 開課學期, 開課年份, 上課地點, 上課時段, 教師代號, 上課日期)
	VALUES(5679, 'IS480', 'SPRING', 2003, 'BLM412', '15:30:00', '876-54-3210', 'TTH')

INSERT INTO 課程
	(課程代號, 科目代號, 開課學期, 開課年份, 上課地點, 上課時段, 教師代號, 上課日期)
	VALUES(6666, 'FIN450', 'WINTER', 2003, 'BLM212', '10:30:00', '987-65-4321', 'TTH')

INSERT INTO 課程
	(課程代號, 科目代號, 開課學期, 開課年份, 上課地點, 上課時段, 教師代號, 上課日期)
	VALUES(7777, 'FIN480', 'SPRING', 2003, 'BLM305', '13:30:00', '765-43-2109', 'MW')

INSERT INTO 課程
	(課程代號, 科目代號, 開課學期, 開課年份, 上課地點, 上課時段, 教師代號, 上課日期)
	VALUES(8888, 'IS320', 'SUMMER', 2003, 'BLM405', '13:30:00', '654-32-1098', 'MW')

INSERT INTO 課程
	(課程代號, 科目代號, 開課學期, 開課年份, 上課地點, 上課時段, 教師代號, 上課日期)
	VALUES(9876, 'IS460', 'SPRING', 2003, 'BLM307', '13:30:00', '654-32-1098', 'TTH')

INSERT INTO 選修
	(課程代號, 學生代號, 修課成績)
	VALUES(1234,'123-45-6789',3.30)

INSERT INTO 選修
	(課程代號, 學生代號, 修課成績)
	VALUES(1234,'234-56-7890',3.50)

INSERT INTO 選修
	(課程代號, 學生代號, 修課成績)
	VALUES(1234,'345-67-8901',3.20)

INSERT INTO 選修
	(課程代號, 學生代號, 修課成績)
	VALUES(1234,'456-78-9012',3.10)

INSERT INTO 選修
	(課程代號, 學生代號, 修課成績)
	VALUES(1234,'567-89-0123',3.80)

INSERT INTO 選修
	(課程代號, 學生代號, 修課成績)
	VALUES(1234,'678-90-1234',3.40)

INSERT INTO 選修
	(課程代號, 學生代號, 修課成績)
	VALUES(4321,'123-45-6789',3.50)

INSERT INTO 選修
	(課程代號, 學生代號, 修課成績)
	VALUES(4321,'124-56-7890',3.20)

INSERT INTO 選修
	(課程代號, 學生代號, 修課成績)
	VALUES(4321,'789-01-2345',3.50)

INSERT INTO 選修
	(課程代號, 學生代號, 修課成績)
	VALUES(4321,'876-54-3210',3.10)

INSERT INTO 選修
	(課程代號, 學生代號, 修課成績)
	VALUES(4321,'890-12-3456',3.40)

INSERT INTO 選修
	(課程代號, 學生代號, 修課成績)
	VALUES(4321,'901-23-4567',3.10)

INSERT INTO 選修
	(課程代號, 學生代號, 修課成績)
	VALUES(5555,'123-45-6789',3.20)

INSERT INTO 選修
	(課程代號, 學生代號, 修課成績)
	VALUES(5555,'124-56-7890',2.70)

INSERT INTO 選修
	(課程代號, 學生代號, 修課成績)
	VALUES(5678,'123-45-6789',3.20)

INSERT INTO 選修
	(課程代號, 學生代號, 修課成績)
	VALUES(5678,'234-56-7890',2.80)

INSERT INTO 選修
	(課程代號, 學生代號, 修課成績)
	VALUES(5678,'345-67-8901',3.30)

INSERT INTO 選修
	(課程代號, 學生代號, 修課成績)
	VALUES(5678,'456-78-9012',3.40)

INSERT INTO 選修
	(課程代號, 學生代號, 修課成績)
	VALUES(5678,'567-89-0123',2.60)

INSERT INTO 選修
	(課程代號, 學生代號, 修課成績)
	VALUES(5679,'123-45-6789',2.00)

INSERT INTO 選修
	(課程代號, 學生代號, 修課成績)
	VALUES(5679,'124-56-7890',3.70)

INSERT INTO 選修
	(課程代號, 學生代號, 修課成績)
	VALUES(5679,'678-90-1234',3.30)

INSERT INTO 選修
	(課程代號, 學生代號, 修課成績)
	VALUES(5679,'789-01-2345',3.80)

INSERT INTO 選修
	(課程代號, 學生代號, 修課成績)
	VALUES(5679,'890-12-3456',2.9)

INSERT INTO 選修
	(課程代號, 學生代號, 修課成績)
	VALUES(5679,'901-23-4567',3.1)

INSERT INTO 選修
	(課程代號, 學生代號, 修課成績)
	VALUES(6666,'234-56-7890',3.1)

INSERT INTO 選修
	(課程代號, 學生代號, 修課成績)
	VALUES(6666,'567-89-0123',3.6)

INSERT INTO 選修
	(課程代號, 學生代號, 修課成績)
	VALUES(7777,'876-54-3210',3.4)

INSERT INTO 選修
	(課程代號, 學生代號, 修課成績)
	VALUES(7777,'890-12-3456',3.7)

INSERT INTO 選修
	(課程代號, 學生代號, 修課成績)
	VALUES(7777,'901-23-4567',3.4)

INSERT INTO 選修
	(課程代號, 學生代號, 修課成績)
	VALUES(9876,'124-56-7890',3.5)

INSERT INTO 選修
	(課程代號, 學生代號, 修課成績)
	VALUES(9876,'234-56-7890',3.2)

INSERT INTO 選修
	(課程代號, 學生代號, 修課成績)
	VALUES(9876,'345-67-8901',3.2)

INSERT INTO 選修
	(課程代號, 學生代號, 修課成績)
	VALUES(9876,'456-78-9012',3.4)

INSERT INTO 選修
	(課程代號, 學生代號, 修課成績)
	VALUES(9876,'567-89-0123',2.6)

INSERT INTO 選修
	(課程代號, 學生代號, 修課成績)
	VALUES(9876,'678-90-1234',3.3)

INSERT INTO 選修
	(課程代號, 學生代號, 修課成績)
	VALUES(9876,'901-23-4567',4)

--這三行是答案 上面是腳本請刪除 請保留下面三行就可以舉手
SELECT COUNT(學生代號) FROM dbo.學生 WHERE 城市 = 'SEATTLE';
SELECT 城市, COUNT(學生姓) FROM dbo.學生 GROUP BY 城市;
SELECT * FROM (SELECT 學生代號, AVG(修課成績) as 平均修課成績 FROM dbo.選修 GROUP BY 學生代號) AS data WHERE 平均修課成績 >= 3.0;
