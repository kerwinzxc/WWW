<?php
$z[0]=Array("global","",106,134);
$z[0][4]['name']="cfg_soft_lang";
$z[1]=Array("field","",416,435);
$z[1][4]['name']="title";
$z[2]=Array("global","",436,462);
$z[2][4]['name']="cfg_webname";
$z[3]=Array("field","",503,532);
$z[3][4]['name']="keywords";
$z[4]=Array("field","",572,630);
$z[4][4]['name']="description";
$z[4][4]['function']="html2text(@me)";
$z[5]=Array("include","",1518,1553);
$z[5][4]['filename']="head.htm";
$z[6]=Array("myad","",1624,1650);
$z[6][4]['name']="toppic";
$z[7]=Array("field","",1803,1832);
$z[7][4]['name']="position";
$z[8]=Array("list","\r\n      <section class=\"section wow fadeIn\">\r\n        <div class=\"thumbnail\"> <a href=\"[field:arcurl/]\" title=\"[field:title/]\" target=\"_blank\"><img src=\"[field:picname/]\" alt=\"[field:title/]\"/></a> </div>\r\n        <h2><a href=\"[field:arcurl/]\" title=\"[field:title/]\" target=\"_blank\">[field:title/]</a></h2>\r\n        <div class=\"postmeta\"> <span><i class=\"icon-user-circle-o\"></i> <a>[field:writer/]</a></span> <span><i class=\"icon-calendar\"></i>\r\n          <time>[field:pubdate function=\"MyDate('Y-m-d',@me)\"/]</time>\r\n          </span> <span><i class=\"icon-eye\"></i> [field:click/]</span></div>\r\n        <div class=\"excerpt\">\r\n          <p> [field:description function=\"cn_substr(@me,320)\"/]...</p>\r\n        </div>\r\n      </section>\r\n      ",1855,2633);
$z[8][4]['pagesize']="6";
$z[9]=Array("pagelist","",2668,2734);
$z[9][4]['listitem']="index,end,pre,next,pageno";
$z[9][4]['listsize']="2";
$z[10]=Array("include","",2768,2803);
$z[10][4]['filename']="left.htm";
$z[11]=Array("myad","",2840,2868);
$z[11][4]['name']="footepic";
$z[12]=Array("include","",2972,3009);
$z[12][4]['filename']="footer.htm";

?>