<?php
$z[0]=Array("global","",254,280);
$z[0][4]['name']="cfg_webname";
$z[1]=Array("global","",324,354);
$z[1][4]['name']="cfg_description";
$z[2]=Array("global","",391,418);
$z[2][4]['name']="cfg_keywords";
$z[3]=Array("global","",482,510);
$z[3][4]['name']="cfg_mobileurl";
$z[4]=Array("global","",989,1017);
$z[4][4]['name']="cfg_mobileurl";
$z[5]=Array("global","",1134,1159);
$z[5][4]['name']="cfg_cmsurl";
$z[6]=Array("global","",1235,1260);
$z[6][4]['name']="cfg_cmsurl";
$z[7]=Array("global","",1334,1359);
$z[7][4]['name']="cfg_cmsurl";
$z[8]=Array("global","",1446,1471);
$z[8][4]['name']="cfg_cmsurl";
$z[9]=Array("global","",1533,1558);
$z[9][4]['name']="cfg_cmsurl";
$z[10]=Array("global","",1644,1669);
$z[10][4]['name']="cfg_cmsurl";
$z[11]=Array("include","",1788,1823);
$z[11][4]['filename']="head.htm";
$z[12]=Array("arclist","\r\n                    <li></li>\r\n                    ",1987,2084);
$z[12][4]['row']="5";
$z[12][4]['flag']="f";
$z[13]=Array("arclist","\r\n                    <li>\r\n                        <div class=\"pic\"><a href=\"[field:arcurl/]\"><img src=\"[field:picname/]\" alt=\"[field:fulltitle/]\" /></a></div>\r\n                        <div class=\"tit\"><a href=\"[field:arcurl/]\">[field:title/]</a></div>\r\n                        <div class=\"bg\"></div>\r\n                    </li>\r\n                    ",2201,2607);
$z[13][4]['row']="5";
$z[13][4]['titlelen']="60";
$z[13][4]['flag']="f";
$z[14]=Array("arclist","\r\n                <li><a href=\"[field:arcurl/]\">[field:title/]</a></li>\r\n                ",3202,3349);
$z[14][4]['row']="10";
$z[14][4]['titlelen']="100";
$z[14][4]['flag']="c";
$z[15]=Array("arclist","\r\n        <h1><a href=\"[field:arcurl/]\">[field:title/]</a></h1>\r\n		<p>[field:description function=\"cn_substr(@me,120)\"/]……</p>\r\n        ",3477,3679);
$z[15][4]['limit']="0,1";
$z[15][4]['titlelen']="50";
$z[15][4]['flag']="h";
$z[16]=Array("arclist","\r\n        	<li><a href=\"[field:arcurl/]\">[field:title/]</a></li>\r\n        	",3704,3843);
$z[16][4]['limit']="0,6";
$z[16][4]['titlelen']="30";
$z[16][4]['noflag']="h";
$z[17]=Array("arclist","\r\n        <h1><a href=\"[field:arcurl/]\">[field:title/]</a></h1>\r\n		<p>[field:description function=\"cn_substr(@me,120)\"/]……</p>\r\n        ",3907,4109);
$z[17][4]['limit']="1,1";
$z[17][4]['titlelen']="50";
$z[17][4]['flag']="h";
$z[18]=Array("arclist","\r\n        	<li><a href=\"[field:arcurl/]\">[field:title/]</a></li>\r\n        	",4134,4273);
$z[18][4]['limit']="8,6";
$z[18][4]['titlelen']="30";
$z[18][4]['noflag']="h";
$z[19]=Array("arclist","\r\n        <h1><a href=\"[field:arcurl/]\">[field:title/]</a></h1>\r\n		<p>[field:description function=\"cn_substr(@me,120)\"/]……</p>\r\n        ",4337,4539);
$z[19][4]['limit']="2,1";
$z[19][4]['titlelen']="50";
$z[19][4]['flag']="h";
$z[20]=Array("arclist","\r\n        	<li><a href=\"[field:arcurl/]\">[field:title/]</a></li>\r\n        	",4564,4704);
$z[20][4]['limit']="16,6";
$z[20][4]['titlelen']="30";
$z[20][4]['noflag']="h";
$z[21]=Array("arclist","\r\n                <li><a href=\"[field:arcurl/]\">[field:title/]</a></li>\r\n                ",5027,5181);
$z[21][4]['row']="10";
$z[21][4]['titlelen']="100";
$z[21][4]['orderby']="click";
$z[22]=Array("channelartlist","\r\n<div class=\"main2\">\r\n	<div class=\"t_2\">\r\n    	<span>\r\n        	{dede:channel type='son'}<a href='[field:typeurl/]'>[field:typename/]</a>|{/dede:channel}\r\n           	<a href=\"{dede:field name='typeurl'/}\">更多>></a> \r\n        </span>\r\n    	<h3><a href=\"{dede:field name='typeurl'/}\">{dede:field name='typename'/}</a></h3>\r\n    </div>\r\n    <div class=\"g_box3 fl\">\r\n        <ul class=\"b_box2\">\r\n        	{dede:arclist limit='0,2' titlelen=50 orderby='pubdate'}\r\n        	<li>\r\n            	<a href=\"[field:arcurl/]\">[field:title/]</a>\r\n                [field:description function=\"cn_substr(@me,70)\"/]...\r\n            </li>\r\n        	{/dede:arclist}\r\n        </ul>\r\n        <ul class=\"b_box3\">\r\n        	{dede:arclist limit='2,6' titlelen=50 orderby='pubdate'}\r\n			<li><a href=\"[field:arcurl/]\">[field:title/]</a></li>\r\n			{/dede:arclist}\r\n        </ul>\r\n    </div>\r\n    <div class=\"g_box4 fl\">\r\n    	{dede:arclist row=1 titlelen=50 flag='a'}\r\n        <h3><a href=\"[field:arcurl/]\">[field:title/]</a></h3>\r\n		<p>[field:description function=\"cn_substr(@me,130)\"/]……</p>\r\n        {/dede:arclist}\r\n        <ul class=\"b_box8\">\r\n        	{dede:arclist row=3 titlelen=100 flag='c'}\r\n			<li>\r\n                <a href=\"[field:arcurl/]\"><img src=\"[field:picname/]\" alt=\"[field:fulltitle/]\" /></a>\r\n                <h4><em>【推荐】</em><a href=\"[field:arcurl/]\">[field:fulltitle/]</a></h4>\r\n                <p>[field:description function=\"cn_substr(@me,100)\"/]...</p>\r\n            </li>\r\n			{/dede:arclist}\r\n        </ul>\r\n    </div>\r\n    <div class=\"g_box3 fl\">\r\n    	<div class=\"t_3\">热门文章</div>\r\n        <ul class=\"b_box4\">\r\n        	{dede:arclist row=10 titlelen=100 orderby='click'}\r\n			<li><a href=\"[field:arcurl/]\">[field:title/]</a></li>\r\n			{/dede:arclist}\r\n        </ul>\r\n    </div>\r\n    <div class=\"clear\"></div>\r\n</div>\r\n",5358,7249);
$z[22][4]['row']="2";
$z[23]=Array("channel","<a href='[field:typeurl/]'>[field:typename/]</a>|",7403,7510);
$z[23][4]['type']="son";
$z[23][4]['typeid']="栏目ID";
$z[24]=Array("arclist","\r\n        <li><a href=\"[field:arcurl/]\"><img src=\"[field:picname/]\" alt=\"[field:fulltitle/]\" /><p>[field:fulltitle/]</p></a></li>\r\n        ",7648,7841);
$z[24][4]['row']="10";
$z[24][4]['typeid']="栏目ID";
$z[25]=Array("flink","\r\n    [field:link /]\r\n    ",7954,8038);
$z[25][4]['row']="100";
$z[25][4]['type']="text";
$z[25][4]['typeid']="0";
$z[26]=Array("include","",8059,8096);
$z[26][4]['filename']="footer.htm";

?>