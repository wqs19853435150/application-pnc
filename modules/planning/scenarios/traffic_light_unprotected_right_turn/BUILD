load("//tools:cpplint.bzl", "cpplint")
load("//tools:apollo_package.bzl", "apollo_cc_test", "apollo_package", "apollo_plugin")

package(default_visibility = ["//visibility:public"])

filegroup(
    name = "runtime_files",
    srcs = glob([
        "conf/**",
    ]),
)

apollo_plugin(
    name = "libtraffic_light_unprotected_right_turn_scenario.so",
    srcs = [
        "stage_creep.cc",
        "stage_intersection_cruise.cc",
        "stage_stop.cc",
        "traffic_light_unprotected_right_turn_scenario.cc",
    ],
    hdrs = [
        "context.h",
        "stage_creep.h",
        "stage_intersection_cruise.h",
        "stage_stop.h",
        "traffic_light_unprotected_right_turn_scenario.h",
    ],
    copts = ["-DMODULE_NAME=\\\"planning\\\""],
    description = ":plugins.xml",
    deps = [
        "//cyber",
        "//modules/common/util:common_util",
        "//modules/common/util:util_tool",
        "//modules/common_msgs/planning_msgs:planning_cc_proto",
        "//modules/planning/planning_interface_base:apollo_planning_planning_interface_base",
        "//modules/planning/scenarios/traffic_light_unprotected_right_turn/proto:traffic_light_unprotected_right_turn_cc_proto",
        "@com_github_gflags_gflags//:gflags",
        "@eigen",
    ],
)

apollo_cc_test(
    name = "traffic_light_right_turn_unprotected_scenario_test",
    size = "small",
    srcs = ["traffic_light_unprotected_right_turn_scenario_test.cc"],
    linkopts = ["-lgomp"],
    linkstatic = True,
    deps = [
        ":traffic_light_unprotected_right_turn_scenario_lib",
        "@com_google_googletest//:gtest_main",
    ],
)

apollo_cc_test(
    name = "stage_creep_test",
    size = "small",
    srcs = ["stage_creep_test.cc"],
    linkopts = ["-lgomp"],
    linkstatic = True,
    deps = [
        ":traffic_light_unprotected_right_turn_scenario_lib",
        "@com_google_googletest//:gtest_main",
    ],
)

apollo_cc_test(
    name = "stage_stop_test",
    size = "small",
    srcs = ["stage_stop_test.cc"],
    linkopts = ["-lgomp"],
    linkstatic = True,
    deps = [
        ":traffic_light_unprotected_right_turn_scenario_lib",
        "@com_google_googletest//:gtest_main",
    ],
)

apollo_package()

cpplint()
