// Copyright 2016 The Chromium OS Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef SYSTEM_API_DBUS_AUTHPOLICY_DBUS_CONSTANTS_H_
#define SYSTEM_API_DBUS_AUTHPOLICY_DBUS_CONSTANTS_H_

namespace authpolicy {

const char kAuthPolicyInterface[] = "org.chromium.AuthPolicy";
const char kAuthPolicyServicePath[] = "/org/chromium/AuthPolicy";
const char kAuthPolicyServiceName[] = "org.chromium.AuthPolicy";
// Methods
const char kAuthPolicyAuthenticateUser[] = "AuthenticateUser";
const char kAuthPolicyJoinADDomain[] = "JoinADDomain";
const char kAuthPolicyRefreshUserPolicy[] = "RefreshUserPolicy";
const char kAuthPolicyRefreshDevicePolicy[] = "RefreshDevicePolicy";

// Enum values.
enum ErrorType {
  ERROR_NONE = 0,               // Everything is A-OK!
  ERROR_UNKNOWN,                // Unspecified error.
  ERROR_DBUS_FAILURE,           // Unspecified D-Bus error.
  ERROR_PARSE_UPN_FAILED,       // Badly formatted user principal name.
  ERROR_BAD_USER_NAME,          // Auth failed because of bad user name.
  ERROR_BAD_PASSWORD,           // Auth failed because of bad password.
  ERROR_PASSWORD_EXPIRED,       // Auth failed because of expired password.
  ERROR_CANNOT_RESOLVE_KDC,     // Auth failed because of bad realm or network.
  ERROR_KINIT_FAILED,           // kinit exited with unspecified error.
  ERROR_NET_FAILED,             // net exited with unspecified error.
  ERROR_SMBCLIENT_FAILED,       // smdclient exited with unspecified error.
  ERROR_PARSE_FAILED,           // authpolicy_parser exited with unknown error.
  ERROR_PARSE_PREG_FAILED,      // Parsing GPOs failed.
  ERROR_BAD_GPOS,               // GPO data is bad.
  ERROR_LOCAL_IO,               // Some local IO operation failed.
  ERROR_NOT_JOINED,             // Machine is not joined to AD domain yet.
  ERROR_NOT_LOGGED_IN,          // User is not logged in yet.
  ERROR_STORE_POLICY_FAILED,    // Failed to send policy to Session Manager.
  // Should be the last.
  ERROR_COUNT,
};

// TODO(ljusten): 2016/12/26: Remove 4 enums below as soon as Chrome code has
// been switched to new enum above.

// Enum values.
enum ADJoinErrorType {
  AD_JOIN_ERROR_NONE = 0,
  AD_JOIN_ERROR_UNKNOWN = 1,
  AD_JOIN_ERROR_DBUS_FAILURE = 2,
  // Should be the last.
  AD_JOIN_ERROR_COUNT = 3,
};

enum AuthUserErrorType {
  AUTH_USER_ERROR_NONE = 0,
  AUTH_USER_ERROR_UNKNOWN = 1,
  AUTH_USER_ERROR_DBUS_FAILURE = 2,
  // Should be the last.
  AUTH_USER_ERROR_COUNT = 3,
};

enum RefreshUserPolicyErrorType {
  REFRESH_USER_POLICY_ERROR_NONE = 0,
  REFRESH_USER_POLICY_ERROR_UNKNOWN = 1,
  REFRESH_USER_POLICY_ERROR_DBUS_FAILURE = 2,
  // Should be the last.
  REFRESH_USER_POLICY_ERROR_COUNT = 3,
};

enum RefreshDevicePolicyErrorType {
  REFRESH_DEVICE_POLICY_ERROR_NONE = 0,
  REFRESH_DEVICE_POLICY_ERROR_UNKNOWN = 1,
  REFRESH_DEVICE_POLICY_ERROR_DBUS_FAILURE = 2,
  // Should be the last.
  REFRESH_DEVICE_POLICY_ERROR_COUNT = 3,
};

}  // namespace authpolicy

#endif  // SYSTEM_API_DBUS_AUTHPOLICY_DBUS_CONSTANTS_H_