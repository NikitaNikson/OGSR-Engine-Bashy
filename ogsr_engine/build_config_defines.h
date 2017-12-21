#pragma once
// Для изменения настроек нужно создать папку build_config_overrides,
// скопировать этот файл в нее и изменить, как требуется.

// Если функция в precondition диалога не найдена, будем падать, вместо того,
// что бы просто выводить сообщение в лог и игнорировать этот precondition.
#define CRASH_ON_PRECONDITION_NOT_FOUND

// Убирает возможность назначать альтернативные кнопки. Т.е. убирает второй
// столбец в настройках и отключает консольную команду bind_sec.
#define REMOVE_ALTERNATIVE_KEYBOARD_BINDING

// Включает использование шейдерного кэша
//#define USE_SHADER_CACHE

// Включает скиннинг на кватернионах. Позволяет использовать модели с кол-вом костей до 107.
// Надо будет включить после исправления кривого шейдера skin.h. А пока макс. кол-во костей - 71.
//#define QUATERNION_SKINNING

// Другая реализация равнозначных слотов, из xp-dev. Позволяет задавать список
// допустимых слотов в параметре "slot". Вот так:
//   slot = 2,3
//#define NEW_WPN_SLOTS

// Оружие на классе бинокля будет вести себя, как оружие,
// т.е. стрелять, показывать кол-во патронов на худе и т.п. Бинокль
// тоже будет показывать на худе кол-во патронов, 0 патронов. В
// качестве альтернативы, нужному оружию можно добавить один из
// следующих параметров или оба, в зависимости от желаемого результат:
//
// scope_dynamic_zoom = true
// vision_present     = true
//
// и при прицеливании оно будет обладать свойствами бинокля. Еще нужно
// не забыть добавить в секцию этого оружия настройки для бинокля.
#define BINOC_FIRING

// Отключает возможность переключаться между слотами колесиком мыши.
// http://www.amk-team.ru/forum/topic/13383-soc-melkie-pravki-dvizhka/?do=findComment&comment=1124304
#define NO_MOUSE_WHEEL_SWITCH_SLOT

// Заблокировать авто-перезарядку и сброс зума, когда закончились
// патроны.
#define NO_AUTO_RELOAD_WPN

// включает хранилище скриптовых переменных в сейвы
//#define SCRIPT_VARS_STORAGE

// включает экспорт функции setup_game_icon в Lua
#define SCRIPT_ICONS_CONTROL

// Выключает использование анимации рассматривания болта, подкидывания гранат
// и кручения ножа, т.е. anim_playing.
#define STOP_ANIM_PLAYING

// При проблемах в скриптовых биндерах будем падать, а не просто
// ругаться в лог.
#define CRASH_ON_SCRIPT_BINDER_ERRORS

// Включает коллизию с трупами. Это значит, что мобы будут тупить,
// уперевшись в тушку мутантами, т.к. не умеют обходить препятствия.
//#define CORPSES_COLLISION

// Скрывать оружие при открытом диалоге, инвентаре и т.п.
//#define MORE_HIDE_WEAPON

// Включает загрузку скриптов из подкаталогов scripts.
//#define LOAD_SCRIPTS_SUBDIRS

// включает экспорт класса CEffectorZoomInertion для управления движением
// прицела
#define SCRIPT_EZI_CONTROL

// Вычисление и использование правильного положения солнца, вместо позиции из
// погодных конфигов.
#define DYNAMIC_SUN_MOVEMENT

// Выключить музыкальный эмбиент по умолчанию. Можно включить командой
// "g_music_tracks on".
#define G_MUSIC_TRACKS_OFF

// Добавляет небольшую задержку между рендерингом кадров, чтобы зря не
// насиловать видеокарту при больших FPS.
#define ECO_RENDER

// Запрещает заряжать в дробовики патроны разного типа
#define SHOTG_EXTRA_AMMO_FIX

// Red Virus: bobbing effect from lost alpha
//#define WPN_BOBBING
