// this file is generated by xresloader, please don't edit it.

(function(){
  var role_cfg_header = {
    xres_ver : "1.4.2",
    hash_code : "no hash code",
    data_ver : "1.4.2.20180317091854",
    count : 7
  };
  var extend = function (dst, src) {
    for (var k in src) {
      var v = src[k];
      if (undefined === dst[k] || 'object' != typeof(v)) {
        dst[k] = v;
      } else {
        if ('object' != typeof(dst[k])) {
          dst[k] = {};
        }
        extend(dst[k], v)
      }
    }
  };
  try { extend(window, { role_cfg_header : role_cfg_header }); }
  catch(e) { extend(global, { role_cfg_header : role_cfg_header }); }
})();
(function(){
  var role_cfg = [
    {
      test_array : [
        "lalal",
        "欧若拉",
        "小魔女"
      ],
      dep_test : {
        name : "123.0",
        id : 51,
        dep2 : {
          level : "2014-10-13",
          id : 101
        }
      }
    },
    {
      test_array : [
        "blebleble",
        "杰克",
        "海盗王子"
      ],
      dep_test : {
        name : "654.0",
        id : 61,
        dep2 : {
          level : "2014-10-14",
          id : 201
        }
      }
    },
    {
      test_array : [
        "hahaha",
        "库拉",
        "喵少年"
      ],
      dep_test : {
        name : "sdadasd",
        id : 71,
        dep2 : {
          level : "2014-10-15",
          id : 301
        }
      }
    },
    {
      test_array : [
        "angel",
        "莫瑞茨"
      ],
      dep_test : {
        name : "ffff",
        id : 81,
        dep2 : {
          level : "19:10:50",
          id : 401
        }
      }
    },
    {
      test_array : [
        "laopo",
        "爱丽丝"
      ],
      dep_test : {
        name : "gggg",
        id : 91,
        dep2 : {
          level : "09:10:50",
          id : 501
        }
      }
    },
    {
      test_array : [
        "keai",
        "都玛西亚"
      ],
      dep_test : {
        name : "hhhhh",
        id : 101,
        dep2 : {
          level : "2014-50-20 07:50:50",
          id : 601
        }
      }
    }
  ];
  var extend = function (dst, src) {
    for (var k in src) {
      var v = src[k];
      if (undefined === dst[k] || 'object' != typeof(v)) {
        dst[k] = v;
      } else {
        if ('object' != typeof(dst[k])) {
          dst[k] = {};
        }
        extend(dst[k], v)
      }
    }
  };
  try { extend(window, { role_cfg : role_cfg }); }
  catch(e) { extend(global, { role_cfg : role_cfg }); }
})();
